/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc130/submissions/27938328
 * Submitted at: 2021-12-16 18:51:47
 * Problem URL: https://atcoder.jp/contests/abc130/tasks/abc130_d
 * Result: AC
 * Execution Time: 35 ms
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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll l = 0, sum = 0, ans = 0;
  rep(r, n) {
    sum += a[r];
    if (sum >= k) {
      while (sum >= k && l <= r) sum -= a[l++];
      ans += l--;
      sum += a[l];
      // cout << "[DEB] " << l << " " << r + 1 << " " << sum << " " << ans << endl;
    }
  }
  cout << ans << endl;
  return 0;
}