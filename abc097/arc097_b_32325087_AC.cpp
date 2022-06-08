/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc097/submissions/32325087
 * Submitted at: 2022-06-09 00:08:00
 * Problem URL: https://atcoder.jp/contests/abc097/tasks/arc097_b
 * Result: AC
 * Execution Time: 71 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  dsu d(n);
  while (m--) {
    int a, b;
    cin >> a >> b;
    d.merge(a - 1, b - 1);
  }
  int ans = 0;
  rep(i, n) {
    if (d.same(i, p[i] - 1)) ans++;
  }
  cout << ans << endl;
}