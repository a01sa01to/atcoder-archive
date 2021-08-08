/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/24897279
 * Submitted at: 2021-08-09 00:21:36
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_b
 * Result: AC
 * Execution Time: 81 ms
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
  ll n;
  cin >> n;
  vector<pair<ll, ll>> a(n);
  loop(i, n) {
    ll b;
    cin >> b;
    a[i] = make_pair(b, i + 1);
  }
  sort(all(a), [](auto& a, auto& b) {
    return a.first > b.first;
  });
  cout << a[1].second << endl;
  return 0;
}