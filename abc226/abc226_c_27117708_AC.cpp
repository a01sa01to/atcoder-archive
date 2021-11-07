/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/27117708
 * Submitted at: 2021-11-07 23:18:24
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_c
 * Result: AC
 * Execution Time: 156 ms
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

ll dfs(ll v, vector<bool>& mastered, ll2d& Grid, ll1d& t) {
  if (mastered[v]) return 0;
  if (Grid[v].empty()) {
    mastered[v] = true;
    return t[v];
  }
  ll sum = t[v];
  for (ll next_v : Grid[v]) {
    sum += dfs(next_v, mastered, Grid, t);
  }
  mastered[v] = true;
  return sum;
}

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  ll2d Grid(n);
  ll1d t(n);
  vector<bool> mastered(n, false);
  rep(i, n) {
    ll k;
    cin >> t[i] >> k;
    rep(_, k) {
      int a;
      cin >> a;
      a--;
      Grid[i].push_back(a);
    }
  }
  ll ans = dfs(n - 1, mastered, Grid, t);
  cout << ans << endl;
  return 0;
}