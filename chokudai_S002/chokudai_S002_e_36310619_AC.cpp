/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S002/submissions/36310619
 * Submitted at: 2022-11-08 00:03:34
 * Problem URL: https://atcoder.jp/contests/chokudai_S002/tasks/chokudai_S002_e
 * Result: AC
 * Execution Time: 111 ms
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
  int n;
  cin >> n;
  ll ans = 0;
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    ans += min(a / 2, b);
  }
  cout << ans << endl;
  return 0;
}