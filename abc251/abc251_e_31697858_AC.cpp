/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31697858
 * Submitted at: 2022-05-15 00:43:20
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_e
 * Result: AC
 * Execution Time: 121 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  const ll INF = 1e18;
  vector dp(n, vector<ll>(2, INF));
  ll ans = INF;
  auto fill = [&]() {
    rep(i, n) {
      if (i == 0) continue;
      dp[i][0] = dp[i - 1][1];
      dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + a[i];
    }
  };
  {
    // とりあえず1を行う→Nはどっちでも
    dp[0][0] = INF;
    dp[0][1] = a[0];
    fill();
    ans = min({ ans, dp[n - 1][0], dp[n - 1][1] });
  }
  {
    // 1をしない→Nをする
    dp[0][0] = 0;
    dp[0][1] = INF;
    fill();
    ans = min(ans, dp[n - 1][1]);
  }
  cout << ans << endl;
  return 0;
}