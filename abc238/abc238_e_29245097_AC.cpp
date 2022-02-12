/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29245097
 * Submitted at: 2022-02-13 00:32:50
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_e
 * Result: AC
 * Execution Time: 106 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  dsu d(n + 1);
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    d.merge(l - 1, r);
  }
  puts(d.same(0, n) ? "Yes" : "No");
  return 0;
}