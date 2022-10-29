import requests
import os
import time
import git
from datetime import datetime

from func import get_extension, get_submission_url, get_problem_url, fetch_submission, get_last_submission_epoch, commit
from datatypes import Submission


def fetch_submissions(epoch_sec: int) -> list[Submission]:
    """Fetch submissions"""
    url = f"https://kenkoooo.com/atcoder/atcoder-api/v3/user/submissions?user=a01sa01to&from_second={epoch_sec}"
    res = requests.get(url).json()
    return [Submission(**s) for s in res]


def main():
    sec = get_last_submission_epoch()
    print("Last Submission Time:", datetime.fromtimestamp(sec))

    submissions = fetch_submissions(sec)

    print("Found {} submission(s)".format(len(submissions)))

    if len(submissions) == 0:
        print("No new submissions")
        return

    cnt = 1
    for s in submissions:
        print(f"\r\033[1m ({cnt: 3}/{len(submissions): 3})\033[0m Submission #{s.id} ({s.problem_id}, at {datetime.fromtimestamp(s.epoch_second)})", end="", flush=True)
        time.sleep(2)
        save_dir = os.path.join(os.path.dirname(__file__), "..", s.contest_id)
        save_path = f"{save_dir}{os.sep}{s.problem_id}_{s.id}_{s.result}.{get_extension(s.language)}"

        os.makedirs(save_dir, exist_ok=True)
        with open(save_path, mode="w", encoding="UTF-8") as file:
            file.write("/*\n")
            file.write(f" * Author: {s.user_id}\n")
            file.write(f" * Submission URL: {get_submission_url(s)}\n")
            file.write(f" * Submitted at: {datetime.fromtimestamp(s.epoch_second)}\n")
            file.write(f" * Problem URL: {get_problem_url(s)}\n")
            file.write(f" * Result: {s.result}\n")
            file.write(f" * Execution Time: {s.execution_time} ms\n")
            file.write(" */\n\n")
            file.write(fetch_submission(s))
        commit(s, save_path)
        cnt += 1

    print("All Done!")


if __name__ == "__main__":
    main()
