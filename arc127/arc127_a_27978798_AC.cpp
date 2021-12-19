/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc127/submissions/27978798
 * Submitted at: 2021-12-19 16:15:37
 * Problem URL: https://atcoder.jp/contests/arc127/tasks/arc127_a
 * Result: AC
 * Execution Time: 8 ms
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
    if (l > n) continue;
    rep(j, dig - i) {
      r = min(r, n + 1);
      // cout << "[DEB] " << l << " " << r << endl;
      if (r - l > 0) ans += r - l;
      l *= 10, r *= 10;
    }
  }
  cout << ans << endl;
  return 0;
}