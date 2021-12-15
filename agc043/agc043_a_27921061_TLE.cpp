/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc043/submissions/27921061
 * Submitted at: 2021-12-15 14:29:06
 * Problem URL: https://atcoder.jp/contests/agc043/tasks/agc043_a
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

vector<vector<char>> Board;
int h, w;

int dfs(int i, int j) {
  if (i == h - 1 && j == w - 1) return Board[i][j] == '#';
  int ret = 1e9;
  if (i != h - 1) ret = min(ret, dfs(i + 1, j));
  if (j != w - 1) ret = min(ret, dfs(i, j + 1));
  if (Board[i][j] == '#') ++ret;
  return ret;
}

int main() {
  cin >> h >> w;
  Board.resize(h);
  rep(i, h) {
    Board[i].resize(w);
    rep(j, w) {
      cin >> Board[i][j];
    }
  }
  cout << dfs(0, 0) << endl;
  return 0;
}