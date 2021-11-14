/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc227/submissions/27247330
 * Submitted at: 2021-11-14 10:32:28
 * Problem URL: https://atcoder.jp/contests/abc227/tasks/abc227_d
 * Result: WA
 * Execution Time: 89 ms
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
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ok = 0, ng = 1e18;
  while (abs(ok - ng) > 1) {
    // mid個のプロジェクトを作れるか
    ll mid = (ok + ng) / 2;
    ll sum = 0;
    rep(i, n) {
      sum += min(mid, a[i]);
    }
    if (sum >= k * mid) {
      ok = mid;
    }
    else {
      ng = mid;
    }
  }
  cout << ok << endl;
  return 0;
}