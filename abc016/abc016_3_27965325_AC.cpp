/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc016/submissions/27965325
 * Submitted at: 2021-12-18 17:21:08
 * Problem URL: https://atcoder.jp/contests/abc016/tasks/abc016_3
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

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
  vector<int> ans(n, 0);
  rep(i, n) {
    queue<pair<int, int>> que;
    vector<bool> visited(n, false);
    que.push({ i, 0 });
    visited[i] = true;
    while (!que.empty()) {
      auto [v, d] = que.front();
      que.pop();
      if (d == 2) {
        ++ans[i];
        continue;
      }
      for (auto next_v : Graph[v]) {
        if (!visited[next_v]) {
          visited[next_v] = true;
          que.push({ next_v, d + 1 });
        }
      }
    }
    cout << ans[i] << endl;
  }
  return 0;
}