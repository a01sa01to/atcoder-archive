/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37837551
 * Submitted at: 2023-01-07 22:12:23
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_c
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
  dsu d(n);
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    d.merge(u - 1, v - 1);
  }
  cout << d.groups().size() << endl;
  return 0;
}