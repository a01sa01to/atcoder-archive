/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc127/submissions/27978413
 * Submitted at: 2021-12-19 15:51:50
 * Problem URL: https://atcoder.jp/contests/arc127/tasks/arc127_a
 * Result: WA
 * Execution Time: 7 ms
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
  ll ans = 0;
  int dig = to_string(n).size();
  rep(i, dig) {
    // f(x) = x+1となるとき
    string tmp = "1";
    rep(j, i) tmp += "1";
    ll l = stoll(tmp);
    tmp.back() = '2';
    ll r = stoll(tmp);
    rep(j, dig - i) {
      // cout << "[DEB] " << l << " " << r << endl;
      ans += r - l;
      l *= 10, r *= 10;
      r = min(r, n + 1);
    }
  }
  cout << ans << endl;
  return 0;
}