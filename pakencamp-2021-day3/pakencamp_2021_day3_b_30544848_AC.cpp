/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day3/submissions/30544848
 * Submitted at: 2022-03-29 15:22:32
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day3/tasks/pakencamp_2021_day3_b
 * Result: AC
 * Execution Time: 71 ms
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
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  ll x, y;
  cin >> x >> y;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  ll s = sum[n];
  if (x + y != s) {
    cout << "No" << endl;
    return 0;
  }
  int l = 0, r = 0;
  while (r <= n) {
    while (sum[r] - sum[l] < x && r <= n) ++r;
    if (sum[r] - sum[l] == x) {
      cout << "Yes" << endl;
      return 0;
    }
    ++l;
  }
  l = 0, r = 0;
  while (r <= n) {
    while (sum[r] - sum[l] < y && r <= n) ++r;
    if (sum[r] - sum[l] == y) {
      cout << "Yes" << endl;
      return 0;
    }
    ++l;
  }
  cout << "No" << endl;
  return 0;
}