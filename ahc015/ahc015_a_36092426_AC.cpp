/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc015/submissions/36092426
 * Submitted at: 2022-10-30 17:05:44
 * Problem URL: https://atcoder.jp/contests/ahc015/tasks/ahc015_a
 * Result: AC
 * Execution Time: 23 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

constexpr int n = 10;
enum Flavor
{
  Null,
  Strawberry,
  Watermelon,
  Pampkin,
};
enum Dir
{
  Front,
  Back,
  Left,
  Right,
};

using grid_t = vector<vector<Flavor>>;

inline bool inRange(int x, int y) {
  return 0 <= x && x < n && 0 <= y && y < n;
}

inline pair<grid_t, int> calcScore(grid_t Grid, Dir dir) {
  // Move
  if (dir == Front) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (Grid[i][j] != Null) continue;
        for (int k = j + 1; k < n; k++) {
          if (Grid[i][k] != Null) {
            swap(Grid[i][j], Grid[i][k]);
            break;
          }
        }
      }
    }
  }
  else if (dir == Back) {
    for (int i = 0; i < n; i++) {
      for (int j = n - 1; j >= 0; j--) {
        if (Grid[i][j] != Null) continue;
        for (int k = j - 1; k >= 0; k--) {
          if (Grid[i][k] != Null) {
            swap(Grid[i][j], Grid[i][k]);
            break;
          }
        }
      }
    }
  }
  else if (dir == Left) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (Grid[j][i] != Null) continue;
        for (int k = j + 1; k < n; k++) {
          if (Grid[k][i] != Null) {
            swap(Grid[j][i], Grid[k][i]);
            break;
          }
        }
      }
    }
  }
  else if (dir == Right) {
    for (int i = 0; i < n; i++) {
      for (int j = n - 1; j >= 0; j--) {
        if (Grid[j][i] != Null) continue;
        for (int k = j - 1; k >= 0; k--) {
          if (Grid[k][i] != Null) {
            swap(Grid[j][i], Grid[k][i]);
            break;
          }
        }
      }
    }
  }

  // Merge
  vector Visited(n, vector<bool>(n, false));
  int ret = 0;
  rep(i, n) rep(j, n) {
    if (Visited[i][j]) continue;
    if (Grid[i][j] == Null) continue;
    queue<pair<int, int>> que;
    que.push({ i, j });
    Visited[i][j] = true;
    int cnt = 1;
    while (!que.empty()) {
      auto [x, y] = que.front();
      que.pop();
      if (inRange(x + 1, y) && Grid[x][y] == Grid[x + 1][y] && !Visited[x + 1][y]) {
        que.push({ x + 1, y });
        Visited[x + 1][y] = true;
        cnt++;
      }
      if (inRange(x - 1, y) && Grid[x][y] == Grid[x - 1][y] && !Visited[x - 1][y]) {
        que.push({ x - 1, y });
        Visited[x - 1][y] = true;
        cnt++;
      }
      if (inRange(x, y + 1) && Grid[x][y] == Grid[x][y + 1] && !Visited[x][y + 1]) {
        que.push({ x, y + 1 });
        Visited[x][y + 1] = true;
        cnt++;
      }
      if (inRange(x, y - 1) && Grid[x][y] == Grid[x][y - 1] && !Visited[x][y - 1]) {
        que.push({ x, y - 1 });
        Visited[x][y - 1] = true;
        cnt++;
      }
    }
    ret += cnt * cnt * cnt;
  }

  // Addition
  // tate
  rep(i, n) {
    rep(k, 4) {
      if (k == 0) continue;
      int cnt = 0;
      rep(j, n) {
        if (Grid[i][j] == Flavor(k)) cnt++;
        else if (Grid[i][j] == Null) {}
        else {
          ret += cnt;
          cnt = 0;
        }
      }
      ret += cnt;
    }
  }
  // yoko
  rep(i, n) {
    rep(k, 4) {
      if (k == 0) continue;
      int cnt = 0;
      rep(j, n) {
        if (Grid[j][i] == Flavor(k)) cnt++;
        else if (Grid[j][i] == Null) {}
        else {
          ret += cnt;
          cnt = 0;
        }
      }
      ret += cnt;
    }
  }

  return { Grid, ret };
}

inline double rand_double(double l, double r) {
  random_device rnd;
  mt19937 mt(rnd());
  uniform_real_distribution<> rand(l, r);
  return rand(mt);
}

int main() {
  vector<Flavor> flavor(n * n);
  rep(i, n * n) {
    int x;
    cin >> x;
    flavor[i] = Flavor(x);
  }
  grid_t Grid(n, vector<Flavor>(n, Null));

  auto getId = [&](int x) {
    int cnt = 0;
    rep(i, n) rep(j, n) {
      if (Grid[i][j] == Flavor::Null) cnt++;
      if (cnt == x) return make_pair(i, j);
    }
    return make_pair(-1, -1);
  };

  rep(turn, n * n) {
    int x;
    cin >> x;
    auto [i, j] = getId(x);
    Grid[i][j] = Flavor(flavor[turn]);
    auto [tmp, score] = calcScore(Grid, Front);
    int choice = 0;
    for (int i = 0; i < 4; i++) {
      auto [g, s] = calcScore(Grid, Dir(i));
      // Debug(g, s);
      // Debug((score - s - 1000), exp((score - s - 1000) / 100.0));
      if (score - s > 600) {}
      else if (rand_double(0, 1) > exp((score - s - 1000) / 100.0)) {
        score = s;
        tmp = g;
        choice = flavor[turn];
      }
    }
    Grid = tmp;
    cout << "FBLR"[choice] << endl;
  }
  return 0;
}