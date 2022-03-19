/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc137/submissions/30239331
 * Submitted at: 2022-03-19 22:01:29
 * Problem URL: https://atcoder.jp/contests/arc137/tasks/arc137_a
 * Result: AC
 * Execution Time: 14 ms
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
  ll l, r;
  cin >> l >> r;
  ll dis = 0;
  while (true) {
    for (ll i = 0; i <= dis; i++) {
      if (gcd(l + i, r - dis + i) == 1) {
        cout << r - l - dis << endl;
        return 0;
      }
    }
    dis++;
  }
  return 0;
}