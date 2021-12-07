/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc114/submissions/27753936
 * Submitted at: 2021-12-07 22:01:32
 * Problem URL: https://atcoder.jp/contests/arc114/tasks/arc114_a
 * Result: AC
 * Execution Time: 97 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
  int n;
  cin >> n;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  ll ans = 1e18;
  rep(i, 1 << 15) {
    ll tmp = 1;
    rep(j, 15) if (i & (1 << j)) tmp *= primes[j];
    bool chk = true;
    rep(j, n) if (gcd(x[j], tmp) == 1) chk = false;
    if (chk) ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}