/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/34531999
 * Submitted at: 2022-09-03 21:02:01
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_a
 * Result: AC
 * Execution Time: 7 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  if (s == "Monday") {
    cout << 5 << endl;
  }
  else if (s == "Tuesday") {
    cout << 4 << endl;
  }
  else if (s == "Wednesday") {
    cout << 3 << endl;
  }
  else if (s == "Thursday") {
    cout << 2 << endl;
  }
  else if (s == "Friday") {
    cout << 1 << endl;
  }
  return 0;
}