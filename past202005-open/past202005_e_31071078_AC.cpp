/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202005-open/submissions/31071078
 * Submitted at: 2022-04-18 00:21:21
 * Problem URL: https://atcoder.jp/contests/past202005-open/tasks/past202005_e
 * Result: AC
 * Execution Time: 15 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector Graph(n, vector<int>(0));
  map<int, int> col;
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    Graph[u].push_back(v);
    Graph[v].push_back(u);
  }
  rep(i, n) {
    int c;
    cin >> c;
    col[i] = c;
  }
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      --x;
      cout << col[x] << endl;
      for (int v : Graph[x]) {
        col[v] = col[x];
      }
    }
    else {
      int x, y;
      cin >> x >> y;
      --x;
      cout << col[x] << endl;
      col[x] = y;
    }
  }
  return 0;
}