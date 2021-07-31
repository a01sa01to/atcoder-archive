/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc212/submissions/24691944
 * Submitted at: 2021-07-31 22:44:23
 * Problem URL: https://atcoder.jp/contests/abc212/tasks/abc212_d
 * Result: AC
 * Execution Time: 193 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll q;
  cin >> q;
  priority_queue<ll, ll1d, greater<ll>> pq;
  ll add = 0;
  loop(_, q) {
    ll a, b;
    cin >> a;
    if (a == 3) {
      ll v = pq.top();
      pq.pop();
      cout << v + add << endl;
      continue;
    }
    cin >> b;
    if (a == 1) {
      pq.push(b - add);
    }
    else {
      add += b;
    }
  }
  return 0;
}