/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26004205
 * Submitted at: 2021-09-20 11:48:46
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ce
 * Result: AC
 * Execution Time: 4 ms
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
  int n, m;
  cin >> n >> m;
  vector<P> v(m);
  ll2d data(n, ll1d(n, 0));
  rep(i, m) {
    cin >> v[i].first >> v[i].second;
    data[--v[i].first][--v[i].second] = 1;
    data[v[i].second][v[i].first] = 2;
  }
  rep(i, n) {
    rep(j, n) {
      if (data[i][j] == 0) cout << "-";
      else if (data[i][j] == 1)
        cout << "o";
      else if (data[i][j] == 2)
        cout << "x";
      if (j != n - 1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}