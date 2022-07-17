/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33291086
 * Submitted at: 2022-07-17 21:01:26
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_a
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
  if (s[0] == s[1] && s[1] == s[2]) {
    cout << -1 << endl;
  }
  else if (s[0] == s[1])
    cout << s[2] << endl;
  else if (s[0] == s[2])
    cout << s[1] << endl;
  else
    cout << s[0] << endl;

  return 0;
}