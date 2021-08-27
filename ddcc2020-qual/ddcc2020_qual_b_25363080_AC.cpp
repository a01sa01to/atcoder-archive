/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ddcc2020-qual/submissions/25363080
 * Submitted at: 2021-08-27 18:42:44
 * Problem URL: https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_b
 * Result: AC
 * Execution Time: 70 ms
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
  int n;
  cin >> n;
  ll1d a(n), sum(n + 1);
  rep(i, n) {
    cin >> a[i];
    sum[i + 1] = sum[i] + a[i];
  }
  ll ok = n, ng = 0;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    if (sum[mid] >= sum[n] / 2) { ok = mid; }
    else {
      ng = mid;
    }
  }
  // cout << "[DEB] " << ok << endl;
  // 前 sum[ok] -> 前が多め
  // 後ろsum[n]-sum[ok]
  // もしくは
  // 前 sum[ok-1] -> 後ろが多め
  // 後ろ sum[n]-sum[ok-1]
  ll ans = 1e15;
  // 前を膨らませる・後ろを減らす
  ans = min(ans, sum[n] - 2 * sum[ok - 1]);
  // 後ろを膨らませる
  ans = min(ans, 2 * sum[ok] - sum[n]);
  cout << ans << endl;
  return 0;
}