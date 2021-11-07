/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/27119291
 * Submitted at: 2021-11-07 23:58:08
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_e
 * Result: AC
 * Execution Time: 193 ms
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
typedef modint998244353 mint;

int main() {
  cout << fixed << setprecision(15);
  int n, m;
  cin >> n >> m;
  if (n != m) {
    cout << 0 << endl;
    return 0;
  }
  dsu d(n);
  vector<vector<int>> Grid(n);
  rep(_, m) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    Grid[u].push_back(v);
    Grid[v].push_back(u);
    d.merge(u, v);
  }
  vector dg = d.groups();
  mint ans = 1;
  for (vector<int> dgg : dg) {
    int sum = 0;
    for (int x : dgg) sum += Grid[x].size();
    sum /= 2;
    if (sum != dgg.size()) {
      cout << 0 << endl;
      return 0;
    }
    ans *= 2;
  }
  cout << ans.val() << endl;
  return 0;
}