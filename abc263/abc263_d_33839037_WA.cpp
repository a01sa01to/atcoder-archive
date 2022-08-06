/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/33839037
 * Submitted at: 2022-08-06 22:35:08
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_d
 * Result: WA
 * Execution Time: 76 ms
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
  ll x = 0, y = 0;
  rep(i, n + 1) {
    if (l * i - sum[i] < l * x - sum[x]) {
      x = i;
    }
  }
  Debug(x);
  rep(i, x) a[i] = l;
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  Debug(a);
  rep(i, n + 1) {
    if (sum[n - i] + r * i < sum[n - y] + r * y) {
      y = i;
    }
  }
  Debug(y);
  rep(i, y) a[n - i - 1] = r;
  rep(i, n) a[i] -= Pot;
  Debug(a);
  cout << accumulate(a.begin(), a.end(), 0LL) << endl;
  return 0;
}