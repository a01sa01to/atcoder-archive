/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc040/submissions/31259681
 * Submitted at: 2022-04-25 15:23:41
 * Problem URL: https://atcoder.jp/contests/abc040/tasks/abc040_c
 * Result: AC
 * Execution Time: 36 ms
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
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  vector<ll> dp(n, 1e18);
  dp[0] = 0;
  rep(i, n) {
    if (i + 1 < n) dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
    if (i + 2 < n) dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
  }
  cout << dp.back() << endl;
  return 0;
}