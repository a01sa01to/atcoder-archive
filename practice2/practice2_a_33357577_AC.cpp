/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/33357577
 * Submitted at: 2022-07-19 16:16:48
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_a
 * Result: AC
 * Execution Time: 252 ms
 */

#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> par;
  UnionFind(int n) {
    par.resize(n);
    for (int i = 0; i < n; i++) par[i] = i;
  }
  int root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }
  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx != ry) par[rx] = ry;
  }
  bool same(int x, int y) {
    return root(x) == root(y);
  }
};

int main() {
  int n, q;
  cin >> n >> q;
  UnionFind uf(n);
  for (int _ = 0; _ < q; _++) {
    int t, u, v;
    cin >> t >> u >> v;
    if (t == 0) {
      uf.unite(u, v);
    }
    else {
      bool ans = uf.same(u, v);
      cout << (ans ? 1 : 0) << endl;
    }
  }
}