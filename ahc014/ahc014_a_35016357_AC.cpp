/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc014/submissions/35016357
 * Submitted at: 2022-09-20 22:23:19
 * Problem URL: https://atcoder.jp/contests/ahc014/tasks/ahc014_a
 * Result: AC
 * Execution Time: 816 ms
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
    return (sqr(x - p.x) + sqr(y - p.y)) / 2;
  }

  // Usage: 1=D,R; 2=U,R; 3=D,L; 4=U,L; 5=DR,DL; 6=UR,UL; 7=UR,DR; 8=UL,DL; 0=Undefined
  // O(1)
  int canConnect(grid_t& Grid, vector<Point>& Points) {
    int ret = 0;
    update(Grid, Points);
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
    for (int i = x + 1; i < n; i++) {
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
    for (int i = y + 1; i < n; i++) {
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
    for (int i = 1; i < n; i++) {
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
    for (int i = 1; i < n; i++) {
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
    for (int i = 1; i < n; i++) {
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
    for (int i = 1; i < n; i++) {
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

constexpr int Step1_ACDist = 1;

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
  p.update(Grid, Points);

  query_t v;
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
    if (!(step & (1 << 2))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(R) >= Step1_ACDist) goto back2theFuture;
      if (p.dist(D) >= Step1_ACDist) goto back2theFuture;
      if (D.dist(RD) >= Step1_ACDist) goto back2theFuture;
    }
    v[1] = R.c_pair();
    v[2] = RD.c_pair();
    v[3] = D.c_pair();
    RD.U = RD.L = Used;
    R.L = R.D = Used;
    D.U = D.R = Used;
    p.R = p.D = Used;
    t = 0;
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
    if (!(step & (1 << 2))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(U) >= Step1_ACDist) goto back2theFuture;
      if (p.dist(R) >= Step1_ACDist) goto back2theFuture;
      if (R.dist(UR) >= Step1_ACDist) goto back2theFuture;
    }
    v[1] = U.c_pair();
    v[2] = UR.c_pair();
    v[3] = R.c_pair();
    UR.L = UR.D = Used;
    U.D = U.R = Used;
    R.L = R.U = Used;
    p.U = p.R = Used;
    t = 0;
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
    if (!(step & (1 << 2))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(D) >= Step1_ACDist) goto back2theFuture;
      if (p.dist(L) >= Step1_ACDist) goto back2theFuture;
      if (D.dist(DL) >= Step1_ACDist) goto back2theFuture;
    }
    v[1] = D.c_pair();
    v[2] = DL.c_pair();
    v[3] = L.c_pair();
    DL.U = DL.R = Used;
    D.R = D.L = Used;
    L.U = L.D = Used;
    p.D = p.L = Used;
    t = 0;
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
    if (!(step & (1 << 2))) goto back2theFuture;
    if (!(step & (1 << 0))) {
      if (p.dist(U) >= Step1_ACDist) goto back2theFuture;
      if (p.dist(L) >= Step1_ACDist) goto back2theFuture;
      if (U.dist(UL) >= Step1_ACDist) goto back2theFuture;
    }
    v[1] = U.c_pair();
    v[2] = UL.c_pair();
    v[3] = L.c_pair();
    UL.R = UL.D = Used;
    U.D = U.L = Used;
    L.R = L.U = Used;
    p.U = p.L = Used;
    t = 0;
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
    v[1] = DR.c_pair();
    v[2] = DD.c_pair();
    v[3] = DL.c_pair();
    DD.UL = DD.UR = Used;
    DR.UL = DR.DL = Used;
    DL.UR = DL.DR = Used;
    p.DR = p.DL = Used;
    t = 0;
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
    v[1] = UL.c_pair();
    v[2] = UU.c_pair();
    v[3] = UR.c_pair();
    UU.DL = UU.DR = Used;
    UL.DR = UL.UR = Used;
    UR.DL = UR.UL = Used;
    p.UL = p.UR = Used;
    t = 0;
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
    v[1] = UR.c_pair();
    v[2] = RR.c_pair();
    v[3] = DR.c_pair();
    RR.UL = RR.DL = Used;
    UR.DL = UR.DR = Used;
    DR.UL = DR.UL = Used;
    p.UR = p.DR = Used;
    t = 0;
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
    v[1] = UL.c_pair();
    v[2] = LL.c_pair();
    v[3] = DL.c_pair();
    LL.UR = LL.DR = Used;
    UL.DR = UL.UL = Used;
    DL.UR = DL.UL = Used;
    p.UL = p.DL = Used;
    t = 0;
    flag = true;
  }

skipped:
  if (flag) {
    ans.push_back(v);
    flg = true;
  }
  else {
    Grid[i][j] = Undefined;
    p.update(Grid, Points);
    Points.pop_back();
  }
}

// そとがわ
inline void g(vector<Point>& Points, grid_t& Grid, int step, ans_t& ans, int st, int ed) {
  while (true) {
    if (!timer.OK()) break;
    int d = st;
    bool flg = false;
    while (d >= ed) {
      rep(j, n) connect(d, j, flg, step, Grid, Points, ans);          // うえ
      rep(i, n) connect(i, n - d - 1, flg, step, Grid, Points, ans);  // みぎ
      rep(j, n) connect(n - d - 1, j, flg, step, Grid, Points, ans);  // した
      rep(i, n) connect(i, d, flg, step, Grid, Points, ans);          // ひだり
      --d;
      if (flg) break;
    }
    if (!flg) {
      cerr << "Step" << step << " end at " << timer.get() << endl;
      break;
    }
  }
}

inline int calcScore(vector<Point>& Points) {
  int ret = 0;
  int c = (n - 1) / 2;
  for (auto p : Points) ret += sqr(p.x - c) + sqr(p.y - c) + 1;
  return ret;
}

int main() {
  timer.start();
  Debug("started");
  grid_t Grid;
  vector<Point> Points;
  ans_t ans;
  input(Grid, Points);
  ans.reserve(n * n);
  ans_t ans1, ans2;
  ans1 = ans, ans2 = ans;
  Debug("input done");

  grid_t Grid1 = Grid;
  grid_t Grid2 = Grid;
  vector<Point> Points1, Points2;
  Points1 = Points, Points2 = Points;

  rep(i, m) Points[i].update(Grid, Points, 1);
  rep(i, m) Points1[i].update(Grid1, Points1, 1);
  rep(i, m) Points2[i].update(Grid2, Points2, 1);
  Debug("input update");

  int s;
  timer.Limit = 2500;
  int st = n / 2;
  const int di = n / 6;

  while (st - di >= 0) {
    do {
      s = ans1.size();
      g(Points1, Grid1, 0b010, ans1, st, st - di);
    } while (s != ans1.size());
    st -= di;
  }
  st = n / 2;
  while (st - di >= 0) {
    do {
      s = ans1.size();
      g(Points1, Grid1, 0b101, ans1, st, st - di);
      g(Points1, Grid1, 0b011, ans1, st, st - di);
    } while (s != ans1.size());
    g(Points1, Grid1, 0b111, ans1, st, st - di);
    st -= di;
  }
  int score1 = calcScore(Points1);

  st = n / 2;
  timer.Limit = 4700;
  while (st - di >= 0) {
    do {
      s = ans2.size();
      g(Points2, Grid2, 0b100, ans2, st, st - di);
    } while (s != ans2.size());
    st -= di;
  }
  st = n / 2;
  while (st - di >= 0) {
    do {
      s = ans2.size();
      g(Points2, Grid2, 0b011, ans2, st, st - di);
      g(Points2, Grid2, 0b101, ans2, st, st - di);
    } while (s != ans2.size());
    g(Points2, Grid2, 0b111, ans2, st, st - di);
    st -= di;
  }
  int score2 = calcScore(Points2);

  Debug("done");
  Debug(score1, score2);
  ans = (score1 < score2 ? ans2 : ans1);
  printf("%zu\n", ans.size());
  for (auto& v : ans) {
    printf("%d %d %d %d %d %d %d %d\n", v[0].first, v[0].second, v[1].first, v[1].second, v[2].first, v[2].second, v[3].first, v[3].second);
  }
  Debug("output");
  return 0;
}