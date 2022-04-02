/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30649179
 * Submitted at: 2022-04-02 21:38:21
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_d
 * Result: AC
 * Execution Time: 96 ms
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

inline ll f(const ll& a, const ll& b) {
  return a * a * a + a * a * b + a * b * b + b * b * b;
}

int main() {
  ll n;
  cin >> n;
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }
  // a^3 + a^2 b + ab^2 + b^3
  // a^2 (a+b) + b^2 (a+b)
  // (a^2 + b^2) (a+b)
  // (a + b)^3 - 2ab(a+b)
  ll ans = 7e18;
  for (ll a = 0; a <= 1e6; ++a) {
    ll ok = 1e6, ng = 0;
    while (ok - ng > 1) {
      ll mid = (ok + ng) / 2;
      if (f(a, mid) >= n) ok = mid;
      else
        ng = mid;
    }
    ans = min(ans, f(a, ok));
  }
  cout << ans << endl;
  return 0;
}