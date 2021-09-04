/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/25595305
 * Submitted at: 2021-09-04 22:01:55
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll l, q;
  cin >> l >> q;
  ll1d sum(1, 0);
  sum.push_back(l);
  rep(i, q) {
    ll c, x;
    cin >> c >> x;
    --c;
    if (!c) {
      // cut
      sum.push_back(x);
    }
    else {
      // solve
      sort(all(sum));
      auto idx = distance(sum.begin(), upper_bound(all(sum), x));
      cout << sum[idx] - sum[idx - 1] << endl;
    }
  }
  return 0;
}