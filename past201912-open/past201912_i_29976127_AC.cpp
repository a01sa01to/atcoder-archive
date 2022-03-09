/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/29976127
 * Submitted at: 2022-03-10 00:00:02
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_i
 * Result: AC
 * Execution Time: 18 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector dp(m + 1, vector<ll>(1 << n, 1e18));
  dp[0][0] = 0;
  int abit = 0;
  rep(i, m) {
    dp[i + 1] = dp[i];
    string s;
    ll c;
    cin >> s >> c;
    int bt = 0;
    rep(j, n) if (s[j] == 'Y') bt |= 1 << j;
    abit |= bt;
    rep(j, 1 << n) {
      dp[i + 1][j | bt] = min(dp[i + 1][j | bt], dp[i][j] + c);
    }
  }
  rep(i, n) if (!(abit & (1 << i))) {
    cout << -1 << endl;
    return 0;
  }
  cout << dp[m][(1 << n) - 1] << endl;
  return 0;
}