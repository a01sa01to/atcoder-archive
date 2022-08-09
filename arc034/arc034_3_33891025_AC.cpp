/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc034/submissions/33891025
 * Submitted at: 2022-08-09 10:44:47
 * Problem URL: https://atcoder.jp/contests/arc034/tasks/arc034_3
 * Result: AC
 * Execution Time: 12 ms
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
using mint = modint1000000007;

int main() {
  int a, b;
  cin >> a >> b;
  map<int, int> pf;
  for (int _ = b + 1; _ <= a; _++) {
    int t = _;
    for (ll i = 2; i * i <= t; i++) {
      while (t % i == 0) {
        pf[i]++;
        t /= i;
      }
    }
    if (t != 1) pf[t]++;
  }
  Debug(pf);
  mint ans = 1;
  for (auto [p, e] : pf) {
    ans *= e + 1;
  }
  cout << ans.val() << endl;
  return 0;
}