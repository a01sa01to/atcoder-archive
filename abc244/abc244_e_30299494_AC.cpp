/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc244/submissions/30299494
 * Submitted at: 2022-03-20 22:07:22
 * Problem URL: https://atcoder.jp/contests/abc244/tasks/abc244_e
 * Result: AC
 * Execution Time: 813 ms
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
typedef modint998244353 mint;

int main() {
  int n, m, k, s, t, x;
  cin >> n >> m >> k >> s >> t >> x;
  --s, --t, --x;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    Graph[u].push_back(v);
    Graph[v].push_back(u);
  }
  // dp[i][j][k] = sからスタートしたとき、i点にj手で到達できる通り、k=xに訪れた回数mod2
  vector dp(n, vector<vector<mint>>(k + 1, vector<mint>(2, 0)));
  dp[s][0][0] = 1;
  rep(j, k) {
    rep(i, n) {
      for (auto& v : Graph[i]) {
        if (v == x) {
          dp[v][j + 1][0] += dp[i][j][1];
          dp[v][j + 1][1] += dp[i][j][0];
        }
        else {
          dp[v][j + 1][0] += dp[i][j][0];
          dp[v][j + 1][1] += dp[i][j][1];
        }
      }
    }
  }
  cout << dp[t][k][0].val() << endl;
  return 0;
}