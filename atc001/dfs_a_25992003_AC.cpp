/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/atc001/submissions/25992003
 * Submitted at: 2021-09-19 23:15:58
 * Problem URL: https://atcoder.jp/contests/atc001/tasks/dfs_a
 * Result: AC
 * Execution Time: 30 ms
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

int h, w;
ll2d Grid;
bool arrived = false;

void dfs(P p) {
  if (arrived) return;
  if (p.first < 0 || p.second < 0 || p.first >= h || p.second >= w) return;
  if (Grid[p.first][p.second] == 3) return;
  if (Grid[p.first][p.second] == 4) return;
  if (Grid[p.first][p.second] == 1) {
    arrived = true;
    return;
  }
  Grid[p.first][p.second] = 4;
  dfs({ p.first + 1, p.second });
  dfs({ p.first, p.second + 1 });
  dfs({ p.first - 1, p.second });
  dfs({ p.first, p.second - 1 });
}

int main() {
  cout << fixed << setprecision(15);
  cin >> h >> w;
  Grid.resize(h);
  P start = { -1, -1 };
  rep(i, h) {
    Grid[i].resize(w);
    rep(j, w) {
      char c;
      cin >> c;
      if (c == 's') {
        Grid[i][j] = 0;
        start = { i, j };
      }
      if (c == 'g') Grid[i][j] = 1;
      if (c == '.') Grid[i][j] = 2;
      if (c == '#') Grid[i][j] = 3;
    }
  }
  dfs(start);
  cout << (arrived ? "Yes" : "No") << endl;
  return 0;
}