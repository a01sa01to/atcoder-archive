/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/33828220
 * Submitted at: 2022-08-06 21:49:03
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_d
 * Result: WA
 * Execution Time: 79 ms
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
  l += Pot, r += Pot;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  rep(i, n) a[i] += Pot;
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  Debug(sum);
  // ll ok = sum[n], ng = 0;
  // while (ok - ng > 1) {
  //   ll mid = (ok + ng) / 2;
  ll x = 0, y = 0;
  rep(i, n + 1) {
    if (l * i - sum[i] < l * x - sum[x]) {
      Debug(i, x);
      x = i;
    }
  }
  rep(i, x) a[i] = l;
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  Debug(a);
  rep(i, n + 1) {
    if (sum[n - i] + r * i < sum[n - y] + r * y) {
      Debug(i, y);
      y = i;
    }
  }
  rep(i, y) a[n - i - 1] = r;
  Debug(a);
  cout << accumulate(a.begin(), a.end(), 0LL) - Pot * n << endl;
  //   Debug(mid - Pot * n, x, y);
  //   ll cnt = l * x - sum[x] + sum[n - y] + r * y;
  //   Debug(cnt - Pot * n);
  //   (cnt <= mid ? ok : ng) = mid;
  // }
  // cout << ok - Pot * n << endl;
  return 0;
}