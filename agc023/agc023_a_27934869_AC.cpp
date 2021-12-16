/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc023/submissions/27934869
 * Submitted at: 2021-12-16 14:11:29
 * Problem URL: https://atcoder.jp/contests/agc023/tasks/agc023_a
 * Result: AC
 * Execution Time: 124 ms
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
  int n;
  cin >> n;
  vector<ll> sum(n + 1, 0);
  rep(i, n) {
    ll a;
    cin >> a;
    sum[i + 1] = sum[i] + a;
  }
  ll ans = 0;
  sort(sum.begin(), sum.end());
  map<ll, ll> mp;
  rep(i, n + 1)++ mp[sum[i]];
  for (auto [x, y] : mp) ans += y * (y - 1) / 2;
  cout << ans << endl;
  return 0;
}