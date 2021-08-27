/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc121/submissions/25366542
 * Submitted at: 2021-08-27 22:55:13
 * Problem URL: https://atcoder.jp/contests/abc121/tasks/abc121_c
 * Result: AC
 * Execution Time: 62 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, m;
  cin >> n >> m;
  vector<P> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  sort(all(v));
  ll sum = 0, ans = 0;
  rep(i, n) {
    ll canBuy = min(v[i].second, m - sum);
    ans += v[i].first * canBuy;
    sum += canBuy;
    if (sum > m) break;
  }
  cout << ans << endl;
  return 0;
}