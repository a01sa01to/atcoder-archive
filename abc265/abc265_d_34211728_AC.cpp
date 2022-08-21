/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34211728
 * Submitted at: 2022-08-21 21:14:17
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_d
 * Result: AC
 * Execution Time: 81 ms
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
  ll n, p, q, r;
  cin >> n >> p >> q >> r;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  rep(i, n) {
    auto itr1 = lower_bound(sum.begin(), sum.end(), sum[i] + p);
    if (itr1 == sum.end()) continue;
    auto itr2 = upper_bound(sum.begin(), sum.end(), sum[i] + p);
    if (itr2 == sum.end()) continue;
    if (itr1 == itr2) continue;
    auto itr3 = lower_bound(sum.begin(), sum.end(), sum[i] + p + q);
    if (itr3 == sum.end()) continue;
    auto itr4 = upper_bound(sum.begin(), sum.end(), sum[i] + p + q);
    if (itr4 == sum.end()) continue;
    if (itr3 == itr4) continue;
    auto itr5 = lower_bound(sum.begin(), sum.end(), sum[i] + p + q + r);
    if (itr5 == sum.end()) continue;
    auto itr6 = upper_bound(sum.begin(), sum.end(), sum[i] + p + q + r);
    if (itr5 == itr6) continue;
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}