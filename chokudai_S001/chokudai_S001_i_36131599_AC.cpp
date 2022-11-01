/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/36131599
 * Submitted at: 2022-11-01 14:35:02
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_i
 * Result: AC
 * Execution Time: 42 ms
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
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  ll ans = 0;
  rep(i, n) {
    auto itr1 = lower_bound(sum.begin(), sum.end(), sum[i] + n);
    auto itr2 = upper_bound(sum.begin(), sum.end(), sum[i] + n);
    if (itr1 != sum.end()) Debug(*itr1);
    if (itr2 != sum.end()) Debug(*itr2);
    if (itr1 != itr2) ans++;
  }
  cout << ans << endl;
  return 0;
}