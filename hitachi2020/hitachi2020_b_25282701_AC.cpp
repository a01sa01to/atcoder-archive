/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/hitachi2020/submissions/25282701
 * Submitted at: 2021-08-23 00:09:09
 * Problem URL: https://atcoder.jp/contests/hitachi2020/tasks/hitachi2020_b
 * Result: AC
 * Execution Time: 121 ms
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
  ll a, b, m;
  cin >> a >> b >> m;
  ll1d ref(a), mic(b);
  rep(i, a) cin >> ref[i];
  rep(i, b) cin >> mic[i];
  priority_queue<ll, ll1d, greater<ll>> cost;
  rep(i, m) {
    ll x, y, c;
    cin >> x >> y >> c;
    cost.push(ref[--x] + mic[--y] - c);
  }
  sort(all(ref));
  sort(all(mic));
  cost.push(ref[0] + mic[0]);
  cout << cost.top() << endl;
  return 0;
}