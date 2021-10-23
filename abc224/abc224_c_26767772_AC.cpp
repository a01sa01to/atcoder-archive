/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc224/submissions/26767772
 * Submitted at: 2021-10-23 21:28:28
 * Problem URL: https://atcoder.jp/contests/abc224/tasks/abc224_c
 * Result: AC
 * Execution Time: 142 ms
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
  vector<P> Grid(n);
  rep(i, n) cin >> Grid[i].first >> Grid[i].second;
  int ans = 0;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      for (int k = j + 1; k < n; k++) {
        vector<P> v = { Grid[i], Grid[j], Grid[k] };
        sort(all(v), [](P& a, P& b) {
          return a.first < b.first;
        });
        ll dx1 = v[1].first - v[0].first;
        ll dx2 = v[2].first - v[1].first;
        ll dy1 = v[1].second - v[0].second;
        ll dy2 = v[2].second - v[1].second;
        if (dy1 * dx2 != dy2 * dx1) ans++;
      }
  cout << ans << endl;
  return 0;
}