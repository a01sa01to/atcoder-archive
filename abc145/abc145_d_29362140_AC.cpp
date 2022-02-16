/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/29362140
 * Submitted at: 2022-02-16 10:04:54
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_d
 * Result: AC
 * Execution Time: 83 ms
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

typedef modint1000000007 mint;

int main() {
  int x, y;
  cin >> x >> y;
  if ((x + y) % 3) cout << 0 << endl;
  else {
    int n = (2 * y - x) / 3;
    int m = (2 * x - y) / 3;
    if (m < 0 || n < 0) cout << 0 << endl;
    else {
      mint ans = 1;  // ans = Combination(n + m, n)
      for (int i = 1; i <= m + n; ++i) ans *= i;
      for (int i = 1; i <= n; ++i) ans /= i;
      for (int i = 1; i <= m; ++i) ans /= i;
      cout << ans.val() << endl;
    }
  }
  return 0;
}