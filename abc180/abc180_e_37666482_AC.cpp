/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc180/submissions/37666482
 * Submitted at: 2023-01-01 03:00:21
 * Problem URL: https://atcoder.jp/contests/abc180/tasks/abc180_e
 * Result: AC
 * Execution Time: 86 ms
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
  vector<tuple<int, int, int>> v(n);
  rep(i, n) {
    int a, b, c;
    cin >> a >> b >> c;
    v[i] = { a, b, c };
  }
  auto dist = [&](tuple<int, int, int> a, tuple<int, int, int> b) {
    return abs(get<0>(a) - get<0>(b)) + abs(get<1>(a) - get<1>(b)) + max(0, get<2>(b) - get<2>(a));
  };
  vector dp(n + 1, vector<ll>(1 << n, 1e18));
  dp[0][1] = 0;
  rep(bit, 1 << n) {
    rep(i, n) {
      if (bit & (1 << i)) continue;
      rep(j, n) {
        if (!(bit & (1 << j))) continue;
        int nbit = bit | (1 << i);
        dp[i][nbit] = min(dp[i][nbit], dp[j][bit] + dist(v[j], v[i]));
      }
    }
  }
  Debug(dp);
  ll ans = 1e18;
  rep(i, n) {
    if (i == 0) continue;
    ans = min(ans, dp[i][(1 << n) - 1] + dist(v[i], v[0]));
  }
  cout << ans << endl;
  return 0;
}