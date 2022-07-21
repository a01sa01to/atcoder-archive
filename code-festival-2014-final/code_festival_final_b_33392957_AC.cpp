/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-final/submissions/33392957
 * Submitted at: 2022-07-21 18:33:38
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_b
 * Result: AC
 * Execution Time: 10 ms
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
  int ans = 0;
  rep(i, s.size()) {
    ans -= ((i % 2) * 2 - 1) * (s[i] - '0');
  }
  cout << ans << endl;
  return 0;
}