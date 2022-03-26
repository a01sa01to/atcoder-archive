/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30478945
 * Submitted at: 2022-03-26 22:36:27
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_f
 * Result: WA
 * Execution Time: 172 ms
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
  scc_graph Graph(n);
  vector G(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph.add_edge(a, b);
    G[a].push_back(b);
  }
  auto tmp = Graph.scc();
  Debug(tmp);
  int cnt = 0;
  rep(i, tmp.size()) {
    if (tmp[i].size() > 1) {
      continue;
    }
    else if (G[tmp[i][0]].size() == 0) {
      ++cnt;
    }
  }
  cout << n - cnt << endl;
  return 0;
}