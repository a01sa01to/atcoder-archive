/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/27996165
 * Submitted at: 2021-12-19 21:17:54
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int h, w;

int dfs(vector<vector<char>>& Grid, int i, int j, int cnt) {
  if (i >= h || j >= w || Grid[i][j] == '#') return cnt;
  return max(dfs(Grid, i + 1, j, cnt + 1), dfs(Grid, i, j + 1, cnt + 1));
}

int main() {
  cin >> h >> w;
  vector Grid(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  cout << dfs(Grid, 0, 0, 0) << endl;
  return 0;
}