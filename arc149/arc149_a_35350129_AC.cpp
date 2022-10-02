/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc149/submissions/35350129
 * Submitted at: 2022-10-02 21:29:20
 * Problem URL: https://atcoder.jp/contests/arc149/tasks/arc149_a
 * Result: AC
 * Execution Time: 27 ms
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
  modint::set_mod(m);
  vector<modint> pw(n);
  pw[0] = 1;
  rep(i, n - 1) pw[i + 1] = pw[i] * 10;
  vector<modint> sm(n + 1, 0);
  sm[0] = 1;
  rep(i, n - 1) sm[i + 1] = sm[i] + pw[i + 1];
  pair<int, int> ans = { -1, -1 };
  rep(i, n) {
    rep(j, 10) {
      if (j == 0) continue;
      modint x = sm[i] * j;
      if (x.val() == 0) {
        ans = { i, j };
      }
    }
  }
  if (ans.first == -1) {
    cout << -1;
  }
  else {
    rep(i, ans.first + 1) cout << ans.second;
  }
  cout << endl;
  return 0;
}