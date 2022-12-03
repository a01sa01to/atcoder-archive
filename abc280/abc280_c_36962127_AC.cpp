/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36962127
 * Submitted at: 2022-12-03 21:10:35
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_c
 * Result: AC
 * Execution Time: 29 ms
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
  string s, t;
  cin >> s >> t;
  rep(i, s.size()) {
    if (s[i] != t[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << t.size() << endl;
  return 0;
}