/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28511403
 * Submitted at: 2022-01-15 00:44:23
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_p
 * Result: WA
 * Execution Time: 296 ms
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
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  int ans = 1e9;
  rep(i, 10000) rep(j, 10000) {
    int k = max(0, (n - (i * a + j * b)) / c);
    if (i * a + j * b + k * c == n) ans = min(ans, i + j + k);
  }
  cout << ans << endl;
  return 0;
}