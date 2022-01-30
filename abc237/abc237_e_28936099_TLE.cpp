/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/28936099
 * Submitted at: 2022-01-30 21:48:47
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_e
 * Result: TLE
 * Execution Time: 2206 ms
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

void dfs(vector<set<int>>& Graph, int i, ll now, vector<bool>& visited, ll& ans, const vector<ll>& h) {
  visited[i] = true;
  ans = max(ans, now);
  for (auto j : Graph[i]) {
    if (visited[j]) continue;
    if (h[j] < h[i])
      dfs(Graph, j, now + h[i] - h[j], visited, ans, h);
    else
      dfs(Graph, j, now - 2 * (h[j] - h[i]), visited, ans, h);
  }
  visited[i] = false;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  vector Graph(n, set<int>());
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].insert(b - 1);
    Graph[b - 1].insert(a - 1);
  }
  ll ans = 0;
  vector<bool> seen(n, false);
  seen[0] = true;
  dfs(Graph, 0, 0, seen, ans, h);
  cout << ans << endl;
  return 0;
}