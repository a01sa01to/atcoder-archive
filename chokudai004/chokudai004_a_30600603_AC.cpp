/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai004/submissions/30600603
 * Submitted at: 2022-04-01 11:26:40
 * Problem URL: https://atcoder.jp/contests/chokudai004/tasks/chokudai004_a
 * Result: AC
 * Execution Time: 2909 ms
 */

#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(...) 0
#endif
#define rep(i, n) for (int i = 0; i < (n); ++i)

int n;
vector<int> b(3);
vector<vector<pair<int, int>>> Grid;

inline int rand_int(const int& l, const int& r) {
  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution rand(l, r);
  return rand(mt);
}

inline double rand_double(const double& l, const double& r) {
  random_device rd;
  mt19937 mt(rd());
  uniform_real_distribution rand(l, r);
  return rand(mt);
}

inline vector<vector<int>> neighbor(vector<vector<int>> v) {
  auto i = rand_int(0, n - 1);
  auto j = rand_int(0, n - 1);
  auto [l, r] = Grid[i][j];
  v[i][j] = rand_int(l, r);
  return v;
}

inline int score(const vector<vector<int>>& v) {
  int point = 0;

  //tate
  rep(i, n) rep(j, n) {
    int now = 0;
    for (int k = i; k < n; k++) {
      now += v[k][j];
      if (now == b[0]) point += b[0];
      if (now == b[1]) point += b[1];
      if (now == b[2]) point += b[2];
      if (now > b[2]) break;
    }
  }

  //yoko
  rep(i, n) rep(j, n) {
    int now = 0;
    for (int k = j; k < n; k++) {
      now += v[i][k];
      if (now == b[0]) point += b[0];
      if (now == b[1]) point += b[1];
      if (now == b[2]) point += b[2];
      if (now > b[2]) break;
    }
  }

  return point;
}

inline double prob(const int& bs, const int& s, const double& time) {
  return exp((s - bs) / pow(0.1, time / 2900));
}

int main() {
  auto start = chrono::system_clock::now();

  cin >> n >> b[0] >> b[1] >> b[2];
  Grid.assign(n, vector<pair<int, int>>(n));
  rep(i, n) rep(j, n) cin >> Grid[i][j].first;
  rep(i, n) rep(j, n) cin >> Grid[i][j].second;

  vector ans(n, vector<int>(n));
  rep(i, n) rep(j, n) {
    auto [l, r] = Grid[i][j];
    ans[i][j] = rand_int(l, r);
  }
  int bestScore = score(ans);
  Debug(bestScore);
  int cnt = 0, ch = 0;
  while (true) {
    auto now = chrono::system_clock::now();
    auto exe = chrono::duration_cast<chrono::milliseconds>(now - start).count();
    if (exe > 2900) break;

    auto nxt = neighbor(ans);
    int nxtScore = score(nxt);
    if (bestScore < nxtScore || rand_double(0, 1) < prob(bestScore, nxtScore, exe)) {
      bestScore = nxtScore;
      swap(ans, nxt);
      ++ch;
    }
    ++cnt;
  }

  Debug(cnt, ch, bestScore);
  rep(i, n) rep(j, n) {
    cout << ans[i][j] << (j == n - 1 ? '\n' : ' ');
  }
  return 0;
}