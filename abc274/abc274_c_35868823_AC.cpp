/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35868823
 * Submitted at: 2022-10-22 21:07:56
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_c
 * Result: AC
 * Execution Time: 627 ms
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
  vector<int> par(1, -1);
  rep(i, n) {
    int x;
    cin >> x;
    par.push_back(x - 1);
    par.push_back(x - 1);
  }
  Debug(par);
  vector<int> ans(2 * n + 1, 0);
  for (int i = 0; i <= 2 * n; i++) {
    if (par[i] == -1) continue;
    ans[i] = ans[par[i]] + 1;
  }
  Debug(ans);
  for (int i = 0; i <= 2 * n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}