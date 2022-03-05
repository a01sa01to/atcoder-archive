/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/29904406
 * Submitted at: 2022-03-06 00:27:43
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_e
 * Result: AC
 * Execution Time: 16 ms
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
  int n, q;
  cin >> n >> q;
  vector g(n, vector<bool>(n, false));
  while (q--) {
    int m;
    cin >> m;
    if (m == 1) {
      int a, b;
      cin >> a >> b;
      g[--a][--b] = true;
    }
    else if (m == 2) {
      int a;
      cin >> a;
      --a;
      rep(i, n) if (g[i][a]) g[a][i] = true;
    }
    else {
      int a;
      cin >> a;
      --a;
      vector<int> tmp(0);
      rep(i, n) rep(j, n) {
        if (g[a][i] && g[i][j] && a != j) tmp.push_back(j);
      }
      for (int x : tmp) g[a][x] = true;
    }
  }
  rep(i, n) {
    rep(j, n) cout << (g[i][j] ? "Y" : "N");
    cout << endl;
  }
  return 0;
}