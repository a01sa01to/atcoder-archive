/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/27998416
 * Submitted at: 2021-12-19 21:23:00
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_d
 * Result: AC
 * Execution Time: 6 ms
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

int dfs(vector<vector<char>>& Grid, int i, int j, vector<vector<int>>& cnt) {
  if (i >= h || j >= w) return 0;
  if (cnt[i][j] != -1) return cnt[i][j];
  if (Grid[i][j] == '#') return cnt[i][j] = 0;
  return cnt[i][j] = max(dfs(Grid, i + 1, j, cnt), dfs(Grid, i, j + 1, cnt)) + 1;
}

int main() {
  cin >> h >> w;
  vector Grid(h, vector<char>(w));
  vector cnt(h, vector<int>(w, -1));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  cout << dfs(Grid, 0, 0, cnt) << endl;
  return 0;
}