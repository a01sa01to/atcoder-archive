/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/cf16-final/submissions/37772908
 * Submitted at: 2023-01-07 00:01:23
 * Problem URL: https://atcoder.jp/contests/cf16-final/tasks/codefestival_2016_final_c
 * Result: AC
 * Execution Time: 40 ms
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
  dsu d(n + m);
  rep(i, n) {
    int k;
    cin >> k;
    rep(j, k) {
      int l;
      cin >> l;
      d.merge(i, n + l - 1);
    }
  }
  bool ok = true;
  rep(i, n) ok &= d.same(0, i);
  cout << (ok ? "YES" : "NO") << endl;
  return 0;
}