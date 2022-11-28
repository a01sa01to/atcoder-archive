/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc114/submissions/36868140
 * Submitted at: 2022-11-29 00:24:01
 * Problem URL: https://atcoder.jp/contests/arc114/tasks/arc114_b
 * Result: AC
 * Execution Time: 67 ms
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

using mint = modint998244353;

int main() {
  int n;
  cin >> n;
  dsu d(n);
  rep(i, n) {
    int f;
    cin >> f;
    d.merge(i, f - 1);
  }
  auto g = d.groups();
  Debug(g);
  cout << (mint(2).pow(g.size()) - 1).val() << endl;
  return 0;
}