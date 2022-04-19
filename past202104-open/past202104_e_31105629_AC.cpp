/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/31105629
 * Submitted at: 2022-04-20 00:30:31
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_e
 * Result: AC
 * Execution Time: 439 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  deque<int> dq;
  auto err = []() {
    cout << "ERROR" << endl;
  };
  rep(i, n) {
    switch (s[i]) {
      case 'L':
        dq.push_front(i + 1);
        break;
      case 'R':
        dq.push_back(i + 1);
        break;
      case 'A':
        if (dq.empty()) {
          err();
        }
        else {
          cout << dq.front() << endl;
          dq.pop_front();
        }
        break;
      case 'B':
        if (dq.size() <= 1) {
          err();
        }
        else {
          int x = dq.front(); dq.pop_front();
          cout << dq.front() << endl;
          dq.pop_front();
          dq.push_front(x);
        }
        break;
      case 'C':
        if (dq.size() <= 2) {
          err();
        }
        else {
          int x = dq.front(); dq.pop_front();
          int y = dq.front(); dq.pop_front();
          cout << dq.front() << endl;
          dq.pop_front();
          dq.push_front(y);
          dq.push_front(x);
        }
        break;
      case 'D':
        if (dq.empty()) {
          err();
        }
        else {
          cout << dq.back() << endl;
          dq.pop_back();
        }
        break;
      case 'E':
        if (dq.size() <= 1) {
          err();
        }
        else {
          int x = dq.back(); dq.pop_back();
          cout << dq.back() << endl;
          dq.pop_back();
          dq.push_back(x);
        }
        break;
      case 'F':
        if (dq.size() <= 2) {
          err();
        }
        else {
          int x = dq.back(); dq.pop_back();
          int y = dq.back(); dq.pop_back();
          cout << dq.back() << endl;
          dq.pop_back();
          dq.push_back(y);
          dq.push_back(x);
        }
        break;
    }
  }
  return 0;
}