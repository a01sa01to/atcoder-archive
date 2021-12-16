/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc002/submissions/27938791
 * Submitted at: 2021-12-16 19:35:23
 * Problem URL: https://atcoder.jp/contests/abc002/tasks/abc002_4
 * Result: AC
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, set<int>());
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    Graph[--a].insert(--b);
    Graph[b].insert(a);
    Graph[a].insert(a);
    Graph[b].insert(b);
  }
  int ans = 1;
  rep(i, 1 << n) {
    set<int> s;
    rep(j, n) if (i & 1 << j) s.insert(j);
    bool chk = true;
    for (int x : s)
      for (int y : s) {
        if (!Graph[x].count(y)) chk = false;
      }
    if (chk) ans = max(ans, int(s.size()));
  }
  cout << ans << endl;
  return 0;
}