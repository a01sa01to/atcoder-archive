import requests
from bs4 import BeautifulSoup

from datatypes import Submission
import get


def submissions(epoch_sec: int) -> list[Submission]:
    url = f"https://kenkoooo.com/atcoder/atcoder-api/v3/user/submissions?user=a01sa01to&from_second={epoch_sec}"
    res = requests.get(url).json()
    return [Submission(**s) for s in res]


def code(s: Submission) -> str:
    url = get.submission_url(s)
    res = requests.get(url).text
    soup = BeautifulSoup(res, "html.parser")
    code = soup.select_one("pre#submission-code")
    if code is None:
        print("code not found for", s.id)
        return "// code not found"
    return code.text.replace("\r", "")
