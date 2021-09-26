/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/26151588
 * Submitted at: 2021-09-26 21:43:27
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_c
 * Result: AC
 * Execution Time: 43 ms
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
  ll n, x;
  cin >> n;
  ll1d a(n), sum(n + 1);
  sum[0] = 0;
  rep(i, n) {
    cin >> a[i];
    sum[i + 1] = sum[i] + a[i];
  }
  cin >> x;
  ll ans = 0, rem = x;
  if (sum[n] <= rem) {
    ans += n * (x / sum[n]);
    rem = x % sum[n];
  }
  auto itr = upper_bound(all(sum), rem);
  ans += distance(sum.begin(), itr);
  cout << ans << endl;
  return 0;
}