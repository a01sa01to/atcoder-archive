/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc014/submissions/35071120
 * Submitted at: 2022-09-24 01:17:35
 * Problem URL: https://atcoder.jp/contests/ahc014/tasks/ahc014_a
 * Result: AC
 * Execution Time: 4336 ms
 */

#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
// #ifdef LOCAL
// #include "settings/debug.cpp"
// #define _GLIBCXX_DEBUG
// #else
#define Debug(...) 0
// #endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

constexpr int Undefined = -1;
constexpr int Used = -2;
using query_t = array<pair<int, int>, 4>;
using ans_t = vector<query_t>;
using grid_t = vector<vector<int>>;

inline int sqr(int x) { return x * x; }

int n, m;
grid_t Grid;
class Point;

bool nhk(const int p) {
  return p != Undefined && p != Used;
}

class Timer {
  chrono::system_clock::time_point t;

  public:
  int Limit = 4800;
  void start() { t = chrono::system_clock::now(); }
  int get() { return chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now() - t).count(); }
  bool OK() { return get() <= Limit; }
};
Timer timer;

class Point {
  public:
  int x, y;
  int U, D, L, R, UR, UL, DR, DL;
  Point(int _x, int _y) {
    x = _x;
    y = _y;
    U = D = L = R = UR = UL = DR = DL = Undefined;
  }
  bool operator==(const Point& p) {
    return x == p.x && y == p.y;
  }
  bool operator!=(const Point& p) {
    return !(*this == p);
  }
  pair<int, int> c_pair() { return { x, y }; }
  int dist(const Point& p) {
    int d = 1;
    if (x != p.x && y != p.y) d = 2;
    return (sqr(x - p.x) + sqr(y - p.y)) / d;
  }

  // Usage: 1=D,R; 2=U,R; 3=D,L; 4=U,L; 5=DR,DL; 6=UR,UL; 7=UR,DR; 8=UL,DL; 0=Undefined
  // O(1)
  int canConnect(grid_t& Grid, vector<Point>& Points) {
    if (x < 0 || x >= n || y < 0 || y >= n || Grid[x][y] != Undefined) return 0;
    int ret = 0;
    update(Grid, Points, 1);
    // 平行 左上
    if (nhk(D) && nhk(R)) {
      Point& d = Points[D];
      Point& r = Points[R];
      if (nhk(d.R) && nhk(r.D) && d.R == r.D) ret |= (1 << 0);
    }
    // 平行 左下
    if (nhk(U) && nhk(R)) {
      Point& u = Points[U];
      Point& r = Points[R];
      if (nhk(u.R) && nhk(r.U) && u.R == r.U) ret |= (1 << 1);
    }
    // 平行 右上
    if (nhk(D) && nhk(L)) {
      Point& d = Points[D];
      Point& l = Points[L];
      if (nhk(d.L) && nhk(l.D) && d.L == l.D) ret |= (1 << 2);
    }
    // 平行 右下
    if (nhk(U) && nhk(L)) {
      Point& u = Points[U];
      Point& l = Points[L];
      if (nhk(u.L) && nhk(l.U) && u.L == l.U) ret |= (1 << 3);
    }
    // 斜め 上
    if (nhk(DR) && nhk(DL)) {
      Point& dr = Points[DR];
      Point& dl = Points[DL];
      if (nhk(dr.DL) && nhk(dl.DR) && dr.DL == dl.DR) ret |= (1 << 4);
    }
    // 斜め 下
    if (nhk(UR) && nhk(UL)) {
      Point& ur = Points[UR];
      Point& ul = Points[UL];
      if (nhk(ur.UL) && nhk(ul.UR) && ur.UL == ul.UR) ret |= (1 << 5);
    }
    // 斜め 左
    if (nhk(UR) && nhk(DR)) {
      Point& ur = Points[UR];
      Point& dr = Points[DR];
      if (nhk(ur.DR) && nhk(dr.UR) && ur.DR == dr.UR) ret |= (1 << 6);
    }
    // 斜め 右
    if (nhk(UL) && nhk(DL)) {
      Point& ul = Points[UL];
      Point& dl = Points[DL];
      if (nhk(ul.DL) && nhk(dl.UL) && ul.DL == dl.UL) ret |= (1 << 7);
    }
    return ret;
  }

  // Usage: Grid変更→Points変更→update
  // O(N)
  void update(grid_t& Grid, vector<Point>& Points, int d = 0) {
    if (d >= 3) return;
    if (nhk(U)) Points[U].update(Grid, Points, d + 1);
    if (nhk(D)) Points[D].update(Grid, Points, d + 1);
    if (nhk(L)) Points[L].update(Grid, Points, d + 1);
    if (nhk(R)) Points[R].update(Grid, Points, d + 1);
    if (nhk(UR)) Points[UR].update(Grid, Points, d + 1);
    if (nhk(UL)) Points[UL].update(Grid, Points, d + 1);
    if (nhk(DR)) Points[DR].update(Grid, Points, d + 1);
    if (nhk(DL)) Points[DL].update(Grid, Points, d + 1);
    U = getU(Grid, Points);
    D = getD(Grid, Points);
    L = getL(Grid, Points);
    R = getR(Grid, Points);
    UR = getUR(Grid, Points);
    UL = getUL(Grid, Points);
    DR = getDR(Grid, Points);
    DL = getDL(Grid, Points);
    if (nhk(U)) Points[U].update(Grid, Points, d + 1);
    if (nhk(D)) Points[D].update(Grid, Points, d + 1);
    if (nhk(L)) Points[L].update(Grid, Points, d + 1);
    if (nhk(R)) Points[R].update(Grid, Points, d + 1);
    if (nhk(UR)) Points[UR].update(Grid, Points, d + 1);
    if (nhk(UL)) Points[UL].update(Grid, Points, d + 1);
    if (nhk(DR)) Points[DR].update(Grid, Points, d + 1);
    if (nhk(DL)) Points[DL].update(Grid, Points, d + 1);
  }

  // O(N)
  int getU(grid_t& Grid, vector<Point>& Points) {
    if (U == Used) return Used;
    for (int i = x - 1; i >= 0; i--) {
      if (Grid[i][y] != Undefined) {
        Point& p = Points[Grid[i][y]];
        if (p.D == Used) return Used;
        return Grid[i][y];
      }
    }
    return Undefined;
  }
  int getD(grid_t& Grid, vector<Point>& Points) {
    if (D == Used) return Used;
    for (int i = x + 1; i < n; ++i) {
      if (Grid[i][y] != Undefined) {
        Point& p = Points[Grid[i][y]];
        if (p.U == Used) return Used;
        return Grid[i][y];
      }
    }
    return Undefined;
  }
  int getL(grid_t& Grid, vector<Point>& Points) {
    if (L == Used) return Used;
    for (int i = y - 1; i >= 0; i--) {
      if (Grid[x][i] != Undefined) {
        Point& p = Points[Grid[x][i]];
        if (p.R == Used) return Used;
        return Grid[x][i];
      }
    }
    return Undefined;
  }
  int getR(grid_t& Grid, vector<Point>& Points) {
    if (R == Used) return Used;
    for (int i = y + 1; i < n; ++i) {
      if (Grid[x][i] != Undefined) {
        Point& p = Points[Grid[x][i]];
        if (p.L == Used) return Used;
        return Grid[x][i];
      }
    }
    return Undefined;
  }
  int getUR(grid_t& Grid, vector<Point>& Points) {
    if (UR == Used) return Used;
    for (int i = 1; i < n; ++i) {
      if (x - i < 0 || y + i >= n) break;
      if (Grid[x - i][y + i] != Undefined) {
        Point& p = Points[Grid[x - i][y + i]];
        if (p.DL == Used) return Used;
        return Grid[x - i][y + i];
      }
    }
    return Undefined;
  }
  int getUL(grid_t& Grid, vector<Point>& Points) {
    if (UL == Used) return Used;
    for (int i = 1; i < n; ++i) {
      if (x - i < 0 || y - i < 0) break;
      if (Grid[x - i][y - i] != Undefined) {
        Point& p = Points[Grid[x - i][y - i]];
        if (p.DR == Used) return Used;
        return Grid[x - i][y - i];
      }
    }
    return Undefined;
  }
  int getDR(grid_t& Grid, vector<Point>& Points) {
    if (DR == Used) return Used;
    for (int i = 1; i < n; ++i) {
      if (x + i >= n || y + i >= n) break;
      if (Grid[x + i][y + i] != Undefined) {
        Point& p = Points[Grid[x + i][y + i]];
        if (p.UL == Used) return Used;
        return Grid[x + i][y + i];
      }
    }
    return Undefined;
  }
  int getDL(grid_t& Grid, vector<Point>& Points) {
    if (DL == Used) return Used;
    for (int i = 1; i < n; ++i) {
      if (x + i >= n || y - i < 0) break;
      if (Grid[x + i][y - i] != Undefined) {
        Point& p = Points[Grid[x + i][y - i]];
        if (p.UR == Used) return Used;
        return Grid[x + i][y - i];
      }
    }
    return Undefined;
  }
};

inline int randint(const int l, const int r) {
  random_device rnd;
  mt19937 mt(rnd());
  uniform_int_distribution<int> rand(l, r);
  return rand(mt);
}

inline void input(grid_t& Grid, vector<Point>& Points) {
  Debug("input start");
  cin >> n >> m;
  Debug("input n, m");
  Grid.reserve(n);
  Grid.assign(n, vector<int>(n, Undefined));
  Points.reserve(n * n);
  Debug("input Grid");
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    Grid[x][y] = i;
    Points.push_back(Point(x, y));
  }
  Debug("input Points");
}

constexpr int Step1_ACDist = 3;

// step: 0:近くのものだけ, 1:平行, 2:ななめ
inline void connect(const int i, const int j, bool& flg, const int step, grid_t& Grid, vector<Point>& Points, ans_t& ans) {
  if (Grid[i][j] != Undefined) return;
  Point _p(i, j);
  int t = _p.canConnect(Grid, Points);
  if (t == 0) return;
  int s = Points.size();
  Grid[i][j] = s;
  Points.push_back(_p);
  Point& p = Points[s];
  p.update(Grid, Points, 1);

  constexpr int INF = 1e9;
  tuple<int, query_t, vector<int*>> ret = { (step & (1 << 0) ? -INF : INF), query_t(), {} };

  query_t& v = get<1>(ret);
  bool flag = false;
  v[0] = p.c_pair();

back2theFuture:
  if (t & (1 << 0)) {
    t ^= (1 << 0);
    if (!nhk(p.R)) goto back2theFuture;
    Point& R = Points[p.R];
    if (!nhk(p.D)) goto back2theFuture;
    Point& D = Points[p.D];
    if (!nhk(R.D)) goto back2theFuture;
    Point& RD = Points[R.D];
    if (!(step & (1 << 1))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(R) >= Step1_ACDist) goto back2theFuture;
      if (p.dist(D) >= Step1_ACDist) goto back2theFuture;
      if (D.dist(RD) >= Step1_ACDist) goto back2theFuture;
    }

    int dist = p.dist(R) + p.dist(D) + D.dist(RD);
    if ((dist < get<0>(ret) && !(step & (1 << 0))) || (dist > get<0>(ret) && (step & (1 << 0)))) {
      get<0>(ret) = dist;
      v[1] = R.c_pair();
      v[2] = RD.c_pair();
      v[3] = D.c_pair();
      get<2>(ret) = { &RD.U, &RD.L, &R.L, &R.D, &D.U, &D.R, &p.R, &p.D };
    }
    flag = true;
  }
  if (t & (1 << 1)) {
    t ^= (1 << 1);
    if (!nhk(p.U)) goto back2theFuture;
    Point& U = Points[p.U];
    if (!nhk(p.R)) goto back2theFuture;
    Point& R = Points[p.R];
    if (!nhk(U.R)) goto back2theFuture;
    Point& UR = Points[U.R];
    if (!(step & (1 << 1))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(U) >= Step1_ACDist) goto back2theFuture;
      if (p.dist(R) >= Step1_ACDist) goto back2theFuture;
      if (R.dist(UR) >= Step1_ACDist) goto back2theFuture;
    }

    int dist = p.dist(U) + p.dist(R) + R.dist(UR);
    if ((dist < get<0>(ret) && !(step & (1 << 0))) || (dist > get<0>(ret) && (step & (1 << 0)))) {
      get<0>(ret) = dist;
      v[1] = U.c_pair();
      v[2] = UR.c_pair();
      v[3] = R.c_pair();
      get<2>(ret) = { &UR.L, &UR.D, &U.D, &U.R, &R.L, &R.U, &p.U, &p.R };
    }
    flag = true;
  }
  if (t & (1 << 2)) {
    t ^= (1 << 2);
    if (!nhk(p.D)) goto back2theFuture;
    Point& D = Points[p.D];
    if (!nhk(p.L)) goto back2theFuture;
    Point& L = Points[p.L];
    if (!nhk(D.L)) goto back2theFuture;
    Point& DL = Points[D.L];
    if (!(step & (1 << 1))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(D) >= Step1_ACDist) goto back2theFuture;
      if (p.dist(L) >= Step1_ACDist) goto back2theFuture;
      if (D.dist(DL) >= Step1_ACDist) goto back2theFuture;
    }

    int dist = p.dist(D) + p.dist(L) + D.dist(DL);
    if ((dist < get<0>(ret) && !(step & (1 << 0))) || (dist > get<0>(ret) && (step & (1 << 0)))) {
      get<0>(ret) = dist;
      v[1] = D.c_pair();
      v[2] = DL.c_pair();
      v[3] = L.c_pair();
      get<2>(ret) = { &DL.U, &DL.R, &D.L, &D.U, &L.D, &L.R, &p.D, &p.L };
    }
    flag = true;
  }
  if (t & (1 << 3)) {
    t ^= (1 << 3);
    if (!nhk(p.U)) goto back2theFuture;
    Point& U = Points[p.U];
    if (!nhk(p.L)) goto back2theFuture;
    Point& L = Points[p.L];
    if (!nhk(U.L)) goto back2theFuture;
    Point& UL = Points[U.L];
    if (!(step & (1 << 1))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(U) >= Step1_ACDist) goto back2theFuture;
      if (p.dist(L) >= Step1_ACDist) goto back2theFuture;
      if (U.dist(UL) >= Step1_ACDist) goto back2theFuture;
    }

    int dist = p.dist(U) + p.dist(L) + U.dist(UL);
    if ((dist < get<0>(ret) && !(step & (1 << 0))) || (dist > get<0>(ret) && (step & (1 << 0)))) {
      get<0>(ret) = dist;
      v[1] = U.c_pair();
      v[2] = UL.c_pair();
      v[3] = L.c_pair();
      get<2>(ret) = { &UL.R, &UL.D, &U.D, &U.L, &L.R, &L.U, &p.U, &p.L };
    }
    flag = true;
  }
  if (t & (1 << 4)) {
    t ^= (1 << 4);
    if (!nhk(p.DR)) goto back2theFuture;
    Point& DR = Points[p.DR];
    if (!nhk(p.DL)) goto back2theFuture;
    Point& DL = Points[p.DL];
    if (!nhk(DR.DL)) goto back2theFuture;
    Point& DD = Points[DR.DL];
    if (!(step & (1 << 2))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(DR) > Step1_ACDist) goto back2theFuture;
      if (p.dist(DL) > Step1_ACDist) goto back2theFuture;
      if (DR.dist(DD) > Step1_ACDist) goto back2theFuture;
    }

    int dist = p.dist(DR) + p.dist(DL) + DR.dist(DD);
    if ((dist < get<0>(ret) && !(step & (1 << 0))) || (dist > get<0>(ret) && (step & (1 << 0)))) {
      get<0>(ret) = dist;
      v[1] = DR.c_pair();
      v[2] = DD.c_pair();
      v[3] = DL.c_pair();
      get<2>(ret) = { &DD.UL, &DD.UR, &DR.UL, &DR.DL, &DL.UR, &DL.DR, &p.DR, &p.DL };
    }
    flag = true;
  }
  if (t & (1 << 5)) {
    t ^= (1 << 5);
    if (!nhk(p.UL)) goto back2theFuture;
    Point& UL = Points[p.UL];
    if (!nhk(p.UR)) goto back2theFuture;
    Point& UR = Points[p.UR];
    if (!nhk(UL.UR)) goto back2theFuture;
    Point& UU = Points[UL.UR];
    if (!(step & (1 << 2))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(UL) > Step1_ACDist) goto back2theFuture;
      if (p.dist(UR) > Step1_ACDist) goto back2theFuture;
      if (UL.dist(UU) > Step1_ACDist) goto back2theFuture;
    }

    int dist = p.dist(UL) + p.dist(UR) + UL.dist(UU);
    if ((dist < get<0>(ret) && !(step & (1 << 0))) || (dist > get<0>(ret) && (step & (1 << 0)))) {
      get<0>(ret) = dist;
      v[1] = UL.c_pair();
      v[2] = UU.c_pair();
      v[3] = UR.c_pair();
      get<2>(ret) = { &UU.DL, &UU.DR, &UL.DR, &UL.UR, &UR.DL, &UR.UL, &p.UL, &p.UR };
    }
    flag = true;
  }
  if (t & (1 << 6)) {
    t ^= (1 << 6);
    if (!nhk(p.UR)) goto back2theFuture;
    Point& UR = Points[p.UR];
    if (!nhk(p.DR)) goto back2theFuture;
    Point& DR = Points[p.DR];
    if (!nhk(UR.DR)) goto back2theFuture;
    Point& RR = Points[UR.DR];
    if (!(step & (1 << 2))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(UR) > Step1_ACDist) goto back2theFuture;
      if (p.dist(DR) > Step1_ACDist) goto back2theFuture;
      if (UR.dist(RR) > Step1_ACDist) goto back2theFuture;
    }

    int dist = p.dist(UR) + p.dist(DR) + UR.dist(RR);
    if ((dist < get<0>(ret) && !(step & (1 << 0))) || (dist > get<0>(ret) && (step & (1 << 0)))) {
      get<0>(ret) = dist;
      v[1] = UR.c_pair();
      v[2] = RR.c_pair();
      v[3] = DR.c_pair();
      get<2>(ret) = { &RR.UL, &RR.DL, &UR.DL, &UR.DR, &DR.UL, &DR.UR, &p.UR, &p.DR };
    }
    flag = true;
  }
  if (t & (1 << 7)) {
    t ^= (1 << 7);
    if (!nhk(p.UL)) goto back2theFuture;
    Point& UL = Points[p.UL];
    if (!nhk(p.DL)) goto back2theFuture;
    Point& DL = Points[p.DL];
    if (!nhk(UL.DL)) goto back2theFuture;
    Point& LL = Points[UL.DL];
    if (!(step & (1 << 2))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(UL) > Step1_ACDist) goto back2theFuture;
      if (p.dist(DL) > Step1_ACDist) goto back2theFuture;
      if (UL.dist(LL) > Step1_ACDist) goto back2theFuture;
    }

    int dist = p.dist(UL) + p.dist(DL) + UL.dist(LL);
    if ((dist < get<0>(ret) && !(step & (1 << 0))) || (dist > get<0>(ret) && (step & (1 << 0)))) {
      get<0>(ret) = dist;
      v[1] = UL.c_pair();
      v[2] = LL.c_pair();
      v[3] = DL.c_pair();
      get<2>(ret) = { &LL.UR, &LL.DR, &UL.DR, &UL.DL, &DL.UR, &DL.UL, &p.UL, &p.DL };
    }
    flag = true;
  }

skipped:
  if (flag && v[1] != v[2] && v[1] != v[3] && v[2] != v[3]) {
    ans.push_back(v);
    for (auto& p : get<2>(ret)) {
      // assert(p != nullptr);
      *p = Used;
    }
    flg = true;
  }
  else {
    Grid[i][j] = Undefined;
    p.update(Grid, Points, 1);
    Points.pop_back();
  }
}

inline int calcScore(vector<Point>& Points) {
  int ret = 0;
  int c = (n - 1) / 2;
  for (auto p : Points) ret += sqr(p.x - c) + sqr(p.y - c) + 1;
  return ret;
}

class State {
  public:
  grid_t Grid;
  vector<Point> Points;
  ans_t ans;
  int score;
  vector<pair<int, int>> neighbors;
  State() {
    score = 0;
  }
  State(const State& s) {
    Grid = s.Grid;
    Points = s.Points;
    ans = s.ans;
    score = s.score;
    neighbors = s.neighbors;
  }
  bool operator<(const State& s) const { return score + sqr(neighbors.size()) / Points.size() < s.score + sqr(s.neighbors.size()) / s.Points.size(); }
  bool operator>(const State& s) const { return score + sqr(neighbors.size()) / Points.size() > s.score + sqr(s.neighbors.size()) / s.Points.size(); }
  State Connect(const int z, const int step) {
    State nextState(*this);
    nextState.score = -1;
    if (!timer.OK()) return nextState;
    auto& [i, j] = neighbors[z];
    bool flg = false;
    connect(i, j, flg, step, nextState.Grid, nextState.Points, nextState.ans);
    if (flg) {
      int c = (n - 1) / 2;
      nextState.neighbors.erase(nextState.neighbors.begin() + z);

      for (int k = 0; k < n; ++k)
        if (Point(k, j).canConnect(nextState.Grid, nextState.Points)) nextState.neighbors.push_back({ k, j });
      for (int k = 0; k < n; ++k)
        if (Point(i, k).canConnect(nextState.Grid, nextState.Points)) nextState.neighbors.push_back({ i, k });
      for (int k = -n; k < n; ++k)
        if (Point(i + k, j + k).canConnect(nextState.Grid, nextState.Points)) nextState.neighbors.push_back({ i + k, j + k });
      for (int k = -n; k < n; ++k)
        if (Point(i + k, j - k).canConnect(nextState.Grid, nextState.Points)) nextState.neighbors.push_back({ i + k, j - k });

      nextState.neighbors.erase(unique(nextState.neighbors.begin(), nextState.neighbors.end()), nextState.neighbors.end());

      nextState.score = this->score + sqr(i - c) + sqr(j - c) + 1;
    }
    return nextState;
  }
};

inline void f(vector<Point>& Points, grid_t& Grid, int step, ans_t& ans, queue<pair<int, int>>& que) {
  while (timer.OK()) {
    int s = que.size();
    rep(_, s) {
      if (!timer.OK()) return;
      auto [i, j] = que.front();
      que.pop();
      if (Grid[i][j] != Undefined) continue;
      bool flg = false;
      connect(i, j, flg, step, Grid, Points, ans);
      if (!flg) que.push({ i, j });
      if (flg) Debug(i, j);
    }
    if (s == que.size()) break;
  }
  cerr << "Step" << step << " end at " << timer.get() << endl;
}

inline void g(ans_t& ans, grid_t& Grid, vector<Point>& Points) {
  ans_t ans1, ans2;
  ans1 = ans, ans2 = ans;

  grid_t Grid1 = Grid;
  grid_t Grid2 = Grid;
  vector<Point> Points1, Points2;
  Points1 = Points, Points2 = Points;
  rep(i, m) Points1[i].update(Grid1, Points1, 1);
  rep(i, m) Points2[i].update(Grid2, Points2, 1);

  queue<pair<int, int>> q_in, q_out;
  {
    int d = n / 2;
    while (d >= 0) {
      for (int j = d; j < n - d - 1; ++j)
        if (Grid[d][j] == Undefined) q_in.push({ d, j });  // うえ
      for (int i = d; i < n - d - 1; ++i)
        if (Grid[i][n - d - 1] == Undefined) q_in.push({ i, n - d - 1 });  // みぎ
      for (int j = d; j < n - d - 1; ++j)
        if (Grid[n - d - 1][j] == Undefined) q_in.push({ n - d - 1, j });  // した
      for (int i = d; i < n - d - 1; ++i)
        if (Grid[i][d] == Undefined) q_in.push({ i, d });  // ひだり
      --d;
    }
  }
  {
    int d = 0;
    while (d <= n / 2) {
      for (int j = d; j < n - d - 1; ++j)
        if (Grid[d][j] == Undefined) q_out.push({ d, j });  // うえ
      for (int i = d; i < n - d - 1; ++i)
        if (Grid[i][n - d - 1] == Undefined) q_out.push({ i, n - d - 1 });  // みぎ
      for (int j = d; j < n - d - 1; ++j)
        if (Grid[n - d - 1][j] == Undefined) q_out.push({ n - d - 1, j });  // した
      for (int i = d; i < n - d - 1; ++i)
        if (Grid[i][d] == Undefined) q_out.push({ i, d });  // ひだり
      ++d;
    }
  }
  Debug(q_in.size(), q_out.size());

  queue<pair<int, int>> q_in1, q_out1;
  queue<pair<int, int>> q_in2, q_out2;
  q_in1 = q_in, q_out1 = q_out;
  q_in2 = q_in, q_out2 = q_out;

  int s;
  timer.Limit = 4500;
  Debug(timer.Limit);
  while (timer.OK()) {
    int cnt = 0;
    do {
      s = ans1.size();
      if (cnt >= 0) f(Points1, Grid1, 0b010, ans1, q_in1);
      // if (n * n >= m * 20 || cnt >= 3) f(Points1, Grid1, 0b100, ans1, q_in1);
      f(Points1, Grid1, 0b101, ans1, q_out1);
      f(Points1, Grid1, 0b011, ans1, q_out1);
      Debug(q_in1.size(), q_out1.size());
      ++cnt;
    } while (s != ans1.size() && timer.OK());
    f(Points1, Grid1, 0b111, ans1, q_in1);
    f(Points1, Grid1, 0b111, ans1, q_out1);
    break;
  }
  int score1 = calcScore(Points1);

  timer.Limit = 4800;
  Debug(timer.Limit);
  while (timer.OK()) {
    int cnt = 0;
    do {
      s = ans2.size();
      if (cnt >= 0) f(Points2, Grid2, 0b100, ans2, q_in2);
      // if (n * n >= m * 20 || cnt >= 3) f(Points2, Grid2, 0b010, ans2, q_in2);
      f(Points2, Grid2, 0b011, ans2, q_out2);
      f(Points2, Grid2, 0b101, ans2, q_out2);
      Debug(q_in2.size(), q_out2.size());
      ++cnt;
    } while (s != ans2.size() && timer.OK());
    f(Points2, Grid2, 0b111, ans2, q_in2);
    f(Points2, Grid2, 0b111, ans2, q_out2);
    break;
  }
  int score2 = calcScore(Points2);
  swap(ans, (score1 > score2 ? ans1 : ans2));
}

int main() {
  timer.start();
  cin.tie(nullptr)->sync_with_stdio(false);
  Debug("started");
  State InitialState;
  input(InitialState.Grid, InitialState.Points);
  for (Point& p : InitialState.Points) p.update(InitialState.Grid, InitialState.Points, 2);
  rep(i, n) rep(j, n) {
    if (InitialState.Grid[i][j] != Undefined) continue;
    Point tmp(i, j);
    int t = tmp.canConnect(InitialState.Grid, InitialState.Points);
    if (t != 0) {
      Debug(i, j);
      InitialState.neighbors.push_back({ i, j });
    }
  }
  InitialState.score = calcScore(InitialState.Points);
  Debug("input done", timer.get());
  Debug(InitialState.score, InitialState.neighbors.size());

  priority_queue<State> que;
  State bestState = InitialState;
  que.push(InitialState);
  timer.Limit = 4200;
  Debug(timer.get());
  while (timer.OK() && !que.empty()) {
    State s = que.top();
    // Debug(timer.get());
    if (s > bestState) {
      bestState = s;
    }
    if (s.neighbors.empty()) break;
    que.pop();
    rep(i, s.neighbors.size()) {
      Debug(timer.get());
      if (!timer.OK()) break;
      State nextState = s.Connect(i, 0b111);
      if (nextState.score != -1) que.push(nextState);
    }

    constexpr int BeamWidth = 500;
    if (que.size() > BeamWidth) {
      priority_queue<State> que2;
      rep(i, BeamWidth) {
        if (!timer.OK()) break;
        que2.push(que.top());
        que.pop();
      }
      swap(que, que2);
    }
  }
  Debug("beam search done", timer.get());

  State& s = bestState;
  g(s.ans, s.Grid, s.Points);

  Debug("done");
  // ans = ans2;
  printf("%zu\n", s.ans.size());
  for (auto& v : s.ans) {
    printf("%d %d %d %d %d %d %d %d\n", v[0].first, v[0].second, v[1].first, v[1].second, v[2].first, v[2].second, v[3].first, v[3].second);
  }
  Debug("output");
  cerr << "Program end: " << timer.get() << " ms" << endl;
  return 0;
}