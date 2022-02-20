/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/29526024
 * Submitted at: 2022-02-20 21:29:02
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_e
 * Result: AC
 * Execution Time: 447 ms
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

int hoge = 0;

void dfs(int v, vector<vector<int>>& Graph, vector<bool>& visited, vector<pair<int, int>>& ans) {
  visited[v] = true;
  bool isleaf = true;
  pair<int, int> t = { 1e9, -1 };
  for (auto next_v : Graph[v]) {
    if (!visited[next_v]) {
      dfs(next_v, Graph, visited, ans);
      t.first = min(t.first, ans[next_v].first);
      t.second = max(t.second, ans[next_v].second);
      isleaf = false;
    }
  }
  if (isleaf) {
    hoge++;
    ans[v] = make_pair(hoge, hoge);
  }
  else {
    ans[v] = t;
  }
}

int main() {
  int n;
  cin >> n;
  vector Graph(n, vector<int>(0));
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].push_back(b - 1);
    Graph[b - 1].push_back(a - 1);
  }
  vector<pair<int, int>> ans(n, { 0, 0 });
  vector<bool> visited(n, false);
  dfs(0, Graph, visited, ans);
  rep(i, n) {
    cout << ans[i].first << " " << ans[i].second << endl;
  }
  return 0;
}