/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26004437
 * Submitted at: 2021-09-20 12:02:39
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ca
 * Result: AC
 * Execution Time: 9 ms
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
  int n;
  cin >> n;
  vector<P> v(n);
  rep(i, n) cin >> v[i].second >> v[i].first;
  sort(all(v));
  rep(i, n) cout << v[i].second << " " << v[i].first << endl;
  return 0;
}