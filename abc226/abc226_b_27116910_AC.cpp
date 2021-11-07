/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/27116910
 * Submitted at: 2021-11-07 23:05:14
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_b
 * Result: AC
 * Execution Time: 229 ms
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
  set<ll1d> s;
  rep(i, n) {
    int l;
    cin >> l;
    ll1d v(l);
    rep(j, l) cin >> v[j];
    s.insert(v);
  }
  cout << s.size() << endl;
  return 0;
}