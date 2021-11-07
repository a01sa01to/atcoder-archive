/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/27118594
 * Submitted at: 2021-11-07 23:38:53
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_d
 * Result: AC
 * Execution Time: 238 ms
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
  int n;
  cin >> n;
  vector<P> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  set<P> st;
  rep(i, n) rep(j, n) {
    if (i == j) continue;
    ll dx = v[i].first - v[j].first, dy = v[i].second - v[j].second;
    st.insert({ dx / gcd(dx, dy), dy / gcd(dx, dy) });
  }
  cout << st.size() << endl;
  return 0;
}