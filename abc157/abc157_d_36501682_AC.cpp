/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/36501682
 * Submitted at: 2022-11-15 00:04:30
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_d
 * Result: AC
 * Execution Time: 141 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  dsu d(n);
  vector<vector<int>> friends(n), blocking(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    friends[a].push_back(b);
    friends[b].push_back(a);
    d.merge(a, b);
  }
  rep(i, k) {
    int c, d;
    cin >> c >> d;
    --c, --d;
    blocking[c].push_back(d);
    blocking[d].push_back(c);
  }
  vector<int> ans(n);
  rep(i, n) {
    ans[i] = d.size(i) - 1 - friends[i].size();
    for (auto j : blocking[i]) {
      if (d.same(i, j)) --ans[i];
    }
  }
  rep(i, n) cout << ans[i] << " ";
  cout << endl;
  return 0;
}