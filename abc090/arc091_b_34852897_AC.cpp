/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc090/submissions/34852897
 * Submitted at: 2022-09-14 18:42:51
 * Problem URL: https://atcoder.jp/contests/abc090/tasks/arc091_b
 * Result: AC
 * Execution Time: 9 ms
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
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  for (ll b = 1; b <= n; b++) {
    Debug(b, ans);
    ans += (n / b) * max(0LL, b - k);
    if (n % b != 0) {
      ans += max(0LL, n % b - k + 1);
      if (k == 0) ans--;
    }
  }
  cout << ans << endl;
  return 0;
}