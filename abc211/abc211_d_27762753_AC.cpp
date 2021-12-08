/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/27762753
 * Submitted at: 2021-12-08 15:15:46
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_d
 * Result: AC
 * Execution Time: 152 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; ++i)
typedef modint1000000007 mint;

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }

  // dp[i] = 都市 i に最速で到達する場合の数
  vector<mint> dp(n, 0);
  dp[0] = 1;

  // que = 次の都市
  queue<int> que;
  vector<int> dist(n, false);
  dist[0] = 1;
  for (int i = 0; i < Graph[0].size(); ++i) {
    que.push(Graph[0][i]);
    dp[Graph[0][i]] += dp[0];
    dist[Graph[0][i]] = 2;
  }

  while (!que.empty()) {
    int p = que.front();
    que.pop();
    for (int i = 0; i < Graph[p].size(); ++i) {
      if (dist[Graph[p][i]] != 0 && dist[p] + 1 == dist[Graph[p][i]]) dp[Graph[p][i]] += dp[p];
      else if (dist[Graph[p][i]] == 0) {
        que.push(Graph[p][i]);
        dp[Graph[p][i]] += dp[p];
        dist[Graph[p][i]] = dist[p] + 1;
      }
    }
  }

  cout << dp[n - 1].val() << endl;
  return 0;
}