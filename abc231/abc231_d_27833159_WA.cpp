/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/27833159
 * Submitted at: 2021-12-11 21:27:18
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_d
 * Result: WA
 * Execution Time: 101 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

vector<bool> visited, finished;
bool dfs(int v, vector<vector<int>>& Graph, int prev) {
  visited[v] = true;
  bool chk = true;
  rep(i, Graph[v].size()) {
    if (Graph[v][i] == prev) continue;
    if (finished[Graph[v][i]]) continue;
    if (visited[Graph[v][i]] && !finished[Graph[v][i]]) return false;
    chk &= dfs(Graph[v][i], Graph, v);
  }
  finished[v] = true;
  return chk;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].push_back(b - 1);
    Graph[b - 1].push_back(a - 1);
  }
  bool chk = true;
  int cnt = 0;
  rep(i, n) {
    if (Graph[i].size() > 2) {
      chk = false;
      break;
    }
    if (Graph[i].size() == 2) ++cnt;
  }
  visited.assign(n, false);
  finished.assign(n, false);
  chk &= dfs(0, Graph, -1);
  puts(chk && cnt <= n - 2 ? "Yes" : "No");
  return 0;
}