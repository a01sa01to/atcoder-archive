/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc037/submissions/34671712
 * Submitted at: 2022-09-07 18:35:00
 * Problem URL: https://atcoder.jp/contests/arc037/tasks/arc037_b
 * Result: AC
 * Execution Time: 8 ms
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
  int n, m;
  cin >> n >> m;
  vector<bool> isTree(n, true);
  dsu d(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (d.same(a, b)) isTree[a] = false, isTree[b] = false;
    d.merge(a, b);
  }
  int ans = 0;
  auto g = d.groups();
  for (auto v : g) {
    bool ok = true;
    for (auto i : v) {
      if (!isTree[i]) ok = false;
    }
    if (ok) ans++;
  }
  cout << ans << endl;
  return 0;
}