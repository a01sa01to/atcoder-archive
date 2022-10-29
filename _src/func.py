import os
import json
import requests
import git
from bs4 import BeautifulSoup
from datetime import datetime

from datatypes import Submission


with open(os.path.join(os.path.dirname(__file__), "ext.json"), mode="r", encoding="UTF-8") as file:
    extensions = json.load(file)


def get_extension(lang: str) -> str:
    """Get language"""
    for v in extensions:
        if lang.startswith(v):
            return extensions[v]
    return "unknown"


def get_submission_url(s: Submission) -> str:
    return f"https://atcoder.jp/contests/{s.contest_id}/submissions/{s.id}"


def get_problem_url(s: Submission) -> str:
    return f"https://atcoder.jp/contests/{s.contest_id}/tasks/{s.problem_id}"


def fetch_submission(s: Submission) -> str:
    url = get_submission_url(s)
    res = requests.get(url).text
    soup = BeautifulSoup(res, "html.parser")
    code = soup.select_one("pre#submission-code")
    if code is None:
        print("code not found for", self.id)
        return ""
    return code.text.replace("\r", "")


def get_last_submission_epoch() -> int:
    """Get last submission epoch second"""
    repo = git.Repo(".")
    if not repo.active_branch.is_valid():
        return 0

    for commit in repo.iter_commits():
        try:
            # Result ProbId (SubmissionID) at EpochSecond
            epoch_sec = int(commit.message.split(" ")[-1].replace("(", "").replace(")", "")) + 1
            print("Found Last Submission Commit:", commit.message)
            return epoch_sec
        except ValueError:
            print("ValueError:", commit.message)
            continue
        except IndexError:
            print("IndexError:", commit.message)
            continue
    return 0


def commit(s: Submission, path: str) -> None:
    repo = git.Repo(".")
    repo.git.add(path)
    commit_msg = f"[{s.result}] SubmissionID: {s.id} at {datetime.fromtimestamp(s.epoch_second)} ({s.epoch_second})"
    try:
        repo.git.commit("-m", commit_msg, "-S", "--date", s.epoch_second)
    except git.GitCommandError:
        print("\033[2K\033[G", end="")
        print(f"\r\033[91mFail\033[0m Failed to commit: {commit_msg}", flush=True)
        exit(1)
    try:
        repo.git.rebase("HEAD~1", "--committer-date-is-author-date")
    except git.GitCommandError:
        print("\033[2K\033[G", end="")
        print(f"\r\033[91mFail\033[0m Failed to rebase: {commit_msg}", flush=True)
        exit(1)
    print("\033[2K\033[G", end="")
    print(f"\r\033[92mDone\033[0m {commit_msg}", flush=True)
