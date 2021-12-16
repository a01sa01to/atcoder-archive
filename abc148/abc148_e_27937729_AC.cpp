/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc148/submissions/27937729
 * Submitted at: 2021-12-16 17:57:06
 * Problem URL: https://atcoder.jp/contests/abc148/tasks/abc148_e
 * Result: AC
 * Execution Time: 6 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n;
  cin >> n;
  if (n % 2 == 1) {
    cout << 0 << endl;
    return 0;
  }
  ll ans = (n /= 10);
  while (n >= 5) {
    ans += (n /= 5);
  }
  cout << ans << endl;
  return 0;
}