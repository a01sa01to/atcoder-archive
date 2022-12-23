/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/indeednow-qualb/submissions/37463736
 * Submitted at: 2022-12-24 00:02:25
 * Problem URL: https://atcoder.jp/contests/indeednow-qualb/tasks/indeednow_2015_qualc_3
 * Result: AC
 * Execution Time: 94 ms
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
  int n;
  cin >> n;
  vector Graph(n, vector<int>(0));
  rep(_, n - 1) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  set<int> s(Graph[0].begin(), Graph[0].end());
  dsu d(n);
  vector<int> ans(1, 0);
  while (ans.size() < n) {
    int v = *s.begin();
    s.erase(v);
    d.merge(0, v);
    ans.push_back(v);
    for (int u : Graph[v]) {
      if (!d.same(0, u)) s.insert(u);
    }
  }
  rep(i, n) cout << ans[i] + 1 << (i == n - 1 ? "\n" : " ");
  return 0;
}