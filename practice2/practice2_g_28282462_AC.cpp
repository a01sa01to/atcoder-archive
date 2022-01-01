/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/28282462
 * Submitted at: 2022-01-02 00:22:26
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_g
 * Result: AC
 * Execution Time: 1043 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  scc_graph Graph(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    Graph.add_edge(a, b);
  }
  vector list = Graph.scc();
  cout << list.size() << endl;
  rep(i, list.size()) {
    cout << list[i].size();
    rep(j, list[i].size()) cout << " " << list[i][j];
    cout << endl;
  }
  return 0;
}