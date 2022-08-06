/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/33845257
 * Submitted at: 2022-08-07 00:19:39
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_d
 * Result: WA
 * Execution Time: 74 ms
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
  constexpr ll Pot = 1e9 + 1;
  ll n, l, r;
  cin >> n >> l >> r;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];

  vector<ll> y_minim(n + 1, 1e18);
  for (int i = n - 1; i >= 0; i--) {
    y_minim[i] = min(y_minim[i + 1], sum[i + 1] - r * i);
  }

  ll x = 0;
  rep(i, n + 1) {
    if (l * i - sum[i] + y_minim[i] < l * x - sum[x] + y_minim[x]) {
      x = i;
    }
  }
  cout << l * x - sum[x] + y_minim[x] + r * (n - 1) << endl;
  return 0;
}