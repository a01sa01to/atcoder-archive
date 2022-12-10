/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37150861
 * Submitted at: 2022-12-10 21:14:09
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_c
 * Result: AC
 * Execution Time: 47 ms
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
  ll n, t;
  cin >> n >> t;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  ll tmp = t / sum.back();
  t %= sum.back();
  auto it = lower_bound(sum.begin(), sum.end(), t);
  int idx = it - sum.begin();
  cout << idx << " " << t - sum[idx - 1] << endl;
  return 0;
}