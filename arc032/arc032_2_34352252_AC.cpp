/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc032/submissions/34352252
 * Submitted at: 2022-08-27 00:09:24
 * Problem URL: https://atcoder.jp/contests/arc032/tasks/arc032_2
 * Result: AC
 * Execution Time: 55 ms
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
  dsu d(n);
  rep(_, m) {
    int a, b;
    cin >> a >> b;
    d.merge(a - 1, b - 1);
  }
  cout << d.groups().size() - 1 << endl;
  return 0;
}