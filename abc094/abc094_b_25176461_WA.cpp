/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc094/submissions/25176461
 * Submitted at: 2021-08-21 00:18:38
 * Problem URL: https://atcoder.jp/contests/abc094/tasks/abc094_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, m, x;
  cin >> n >> m >> x;
  ll1d a(m);
  rep(i, m) cin >> a[i];
  ll ok = 0, ng = m;
  while (abs(ok - ng) > 1) {
    ll mid = (ok + ng) / 2;
    if (a[mid] < x) { ok = mid; }
    else {
      ng = mid;
    }
  }
  cout << min(ok, m - ok) << endl;
  return 0;
}