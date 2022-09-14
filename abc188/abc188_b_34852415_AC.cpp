/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc188/submissions/34852415
 * Submitted at: 2022-09-14 18:11:08
 * Problem URL: https://atcoder.jp/contests/abc188/tasks/abc188_b
 * Result: AC
 * Execution Time: 46 ms
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
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  ll ans = 0;
  rep(i, n) {
    ans += a[i] * b[i];
  }
  cout << (ans == 0 ? "Yes" : "No") << endl;
  return 0;
}