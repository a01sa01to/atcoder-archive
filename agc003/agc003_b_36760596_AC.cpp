/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc003/submissions/36760596
 * Submitted at: 2022-11-25 00:11:39
 * Problem URL: https://atcoder.jp/contests/agc003/tasks/agc003_b
 * Result: AC
 * Execution Time: 41 ms
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
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  ll cnt = 0;
  rep(i, n) {
    if (a[i] == 0) {
      ans += cnt / 2;
      cnt = 0;
    }
    cnt += a[i];
  }
  ans += cnt / 2;
  cout << ans << endl;
  return 0;
}