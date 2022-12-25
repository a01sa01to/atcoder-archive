/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc283/submissions/37530333
 * Submitted at: 2022-12-25 09:23:40
 * Problem URL: https://atcoder.jp/contests/abc283/tasks/abc283_c
 * Result: AC
 * Execution Time: 8 ms
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
  int zeros = 0;
  int ans = 0;
  rep(i, s.size()) {
    if (s[i] == '0') {
      zeros++;
    }
    else {
      ans += zeros / 2 + zeros % 2;
      ans++;
      zeros = 0;
    }
  }
  ans += zeros / 2 + zeros % 2;
  cout << ans << endl;
  return 0;
}