/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc014/submissions/34964878
 * Submitted at: 2022-09-18 11:44:04
 * Problem URL: https://atcoder.jp/contests/ahc014/tasks/ahc014_a
 * Result: AC
 * Execution Time: 4812 ms
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

int n, m;
vector<vector<int>> Grid;
class Point;

vector<Point> Points;
Point *Used, *Null;
bool nhk(const Point* p) {
  return p != Null && p != Used;
}

class Point {
  public:
  int x, y;
  Point *U, *D, *L, *R, *UR, *UL, *DR, *DL;
  Point(int _x, int _y) {
    x = _x;
    y = _y;
    U = D = L = R = UR = UL = DR = DL = Null;
  }
  bool operator==(const Point& p) {
    return x == p.x && y == p.y;
  }
  bool operator!=(const Point& p) {
    return !(*this == p);
  }
  pair<int, int> c_pair() { return { x, y }; }

  // Usage: 1=D,R; 2=U,R; 3=D,L; 4=U,L; 5=DR,DL; 6=UR,UL; 7=UR,DR; 8=UL,DL; 0=Null
  // O(1)
  int canConnect() {
    update();
    // 平行 左上
    if (nhk(D) && nhk(R) && nhk(D->R) && nhk(R->D) && D->R == R->D) {
      return 1;
    }
    // 平行 左下
    if (nhk(U) && nhk(R) && nhk(U->R) && nhk(R->U) && U->R == R->U) {
      return 2;
    }
    // 平行 右上
    if (nhk(D) && nhk(L) && nhk(D->L) && nhk(L->D) && D->L == L->D) {
      return 3;
    }
    // 平行 右下
    if (nhk(U) && nhk(L) && nhk(U->L) && nhk(L->U) && U->L == L->U) {
      return 4;
    }
    // 斜め 上
    if (nhk(DR) && nhk(DL) && nhk(DR->DL) && nhk(DL->DR) && DR->DL == DL->DR) {
      return 5;
    }
    // 斜め 下
    if (nhk(UR) && nhk(UL) && nhk(UR->UL) && nhk(UL->UR) && UR->UL == UL->UR) {
      return 6;
    }
    // 斜め 左
    if (nhk(UR) && nhk(DR) && nhk(UR->DR) && nhk(DR->UR) && UR->DR == DR->UR) {
      return 7;
    }
    // 斜め 右
    if (nhk(UL) && nhk(DL) && nhk(UL->DL) && nhk(DL->UL) && UL->DL == DL->UL) {
      return 8;
    }
    return 0;
  }

  // Usage: Grid変更→Points変更→update
  // O(N)
  void update(int d = 0) {
    if (d >= 3) return;
    if (nhk(U)) U->update(d + 1);
    if (nhk(D)) D->update(d + 1);
    if (nhk(L)) L->update(d + 1);
    if (nhk(R)) R->update(d + 1);
    if (nhk(UR)) UR->update(d + 1);
    if (nhk(UL)) UL->update(d + 1);
    if (nhk(DR)) DR->update(d + 1);
    if (nhk(DL)) DL->update(d + 1);
    U = getU();
    D = getD();
    L = getL();
    R = getR();
    UR = getUR();
    UL = getUL();
    DR = getDR();
    DL = getDL();
    if (nhk(U)) U->update(d + 1);
    if (nhk(D)) D->update(d + 1);
    if (nhk(L)) L->update(d + 1);
    if (nhk(R)) R->update(d + 1);
    if (nhk(UR)) UR->update(d + 1);
    if (nhk(UL)) UL->update(d + 1);
    if (nhk(DR)) DR->update(d + 1);
    if (nhk(DL)) DL->update(d + 1);
  }

  // O(N)
  Point* getU() {
    if (U == Used) return Used;
    for (int i = x - 1; i >= 0; i--) {
      if (Grid[i][y] != Undefined) {
        Point* p = &Points.at(Grid[i][y]);
        if (p->D == Used) return Used;
        return p;
      }
    }
    return Null;
  }
  Point* getD() {
    if (D == Used) return Used;
    for (int i = x + 1; i < n; i++) {
      if (Grid[i][y] != Undefined) {
        Point* p = &Points.at(Grid[i][y]);
        if (p->U == Used) return Used;
        return p;
      }
    }
    return Null;
  }
  Point* getL() {
    if (L == Used) return Used;
    for (int i = y - 1; i >= 0; i--) {
      if (Grid[x][i] != Undefined) {
        Point* p = &Points.at(Grid[x][i]);
        if (p->R == Used) return Used;
        return p;
      }
    }
    return Null;
  }
  Point* getR() {
    if (R == Used) return Used;
    for (int i = y + 1; i < n; i++) {
      if (Grid[x][i] != Undefined) {
        Point* p = &Points.at(Grid[x][i]);
        if (p->L == Used) return Used;
        return p;
      }
    }
    return Null;
  }
  Point* getUR() {
    if (UR == Used) return Used;
    for (int i = 1; i < n; i++) {
      if (x - i < 0 || y + i >= n) break;
      if (Grid[x - i][y + i] != Undefined) {
        Point* p = &Points.at(Grid[x - i][y + i]);
        if (p->DL == Used) return Used;
        return p;
      }
    }
    return Null;
  }
  Point* getUL() {
    if (UL == Used) return Used;
    for (int i = 1; i < n; i++) {
      if (x - i < 0 || y - i < 0) break;
      if (Grid[x - i][y - i] != Undefined) {
        Point* p = &Points.at(Grid[x - i][y - i]);
        if (p->DR == Used) return Used;
        return p;
      }
    }
    return Null;
  }
  Point* getDR() {
    if (DR == Used) return Used;
    for (int i = 1; i < n; i++) {
      if (x + i >= n || y + i >= n) break;
      if (Grid[x + i][y + i] != Undefined) {
        Point* p = &Points.at(Grid[x + i][y + i]);
        if (p->UL == Used) return Used;
        return p;
      }
    }
    return Null;
  }
  Point* getDL() {
    if (DL == Used) return Used;
    for (int i = 1; i < n; i++) {
      if (x + i >= n || y - i < 0) break;
      if (Grid[x + i][y - i] != Undefined) {
        Point* p = &Points.at(Grid[x + i][y - i]);
        if (p->UR == Used) return Used;
        return p;
      }
    }
    return Null;
  }
};

void operator<<(ostream& os, const Point* p) {
  if (p == Used) os << "(Used)";
  else if (p == Null)
    os << "(Null)";
  else
    os << "(" << p->x << ", " << p->y << ")";
}

inline int randint(const int l, const int r) {
  random_device rnd;
  mt19937 mt(rnd());
  uniform_int_distribution<int> rand(l, r);
  return rand(mt);
}

inline void input() {
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
  rep(i, m) Points[i].update(1);
  Debug("input update");
}

vector<vector<pair<int, int>>> ans;
inline void connect(const int i, const int j) {
  if (Grid[i][j] != Undefined) return;
  Point _p(i, j);
  int t = _p.canConnect();
  if (t == 0) return;
  Debug(i, j, t);
  int s = Points.size();
  Grid[i][j] = s;
  Points.push_back(_p);
  Point* p = &Points[s];
  p->update();
  Debug(i, j, p->x, p->y);

  vector<pair<int, int>> v;
  if (!nhk(p)) return;
  v.push_back(p->c_pair());
  if (t == 1) {
    if (!nhk(p->R)) return;
    if (!nhk(p->D)) return;
    if (!nhk(p->R->D)) return;
    v.push_back(p->R->c_pair());
    v.push_back(p->R->D->c_pair());
    v.push_back(p->D->c_pair());
    p->R->D->U = p->R->D->L = Used;
    p->R->L = p->R->D = Used;
    p->D->U = p->D->R = Used;
    p->R = p->D = Used;
  }
  if (t == 2) {
    if (!nhk(p->U)) return;
    if (!nhk(p->R)) return;
    if (!nhk(p->U->R)) return;
    v.push_back(p->U->c_pair());
    v.push_back(p->U->R->c_pair());
    v.push_back(p->R->c_pair());
    p->U->R->L = p->U->R->D = Used;
    p->U->D = p->U->R = Used;
    p->R->L = p->R->U = Used;
    p->U = p->R = Used;
  }
  if (t == 3) {
    if (!nhk(p->D)) return;
    if (!nhk(p->L)) return;
    if (!nhk(p->D->L)) return;
    v.push_back(p->D->c_pair());
    v.push_back(p->D->L->c_pair());
    v.push_back(p->L->c_pair());
    p->D->L->R = p->D->L->U = Used;
    p->D->U = p->D->L = Used;
    p->L->R = p->L->D = Used;
    p->D = p->L = Used;
  }
  if (t == 4) {
    if (!nhk(p->U)) return;
    if (!nhk(p->L)) return;
    if (!nhk(p->U->L)) return;
    v.push_back(p->U->c_pair());
    v.push_back(p->U->L->c_pair());
    v.push_back(p->L->c_pair());
    p->U->L->R = p->U->L->D = Used;
    p->U->D = p->U->L = Used;
    p->L->R = p->L->U = Used;
    p->U = p->L = Used;
  }
  if (t == 5) {
    if (!nhk(p->DR)) return;
    if (!nhk(p->DL)) return;
    if (!nhk(p->DR->DL)) return;
    v.push_back(p->DR->c_pair());
    v.push_back(p->DR->DL->c_pair());
    v.push_back(p->DL->c_pair());
    p->DR->DL->UR = p->DR->DL->UL = Used;
    p->DR->UL = p->DR->DL = Used;
    p->DL->UR = p->DL->DR = Used;
    p->DR = p->DL = Used;
  }
  if (t == 6) {
    if (!nhk(p->UR)) return;
    if (!nhk(p->UL)) return;
    if (!nhk(p->UR->UL)) return;
    v.push_back(p->UR->c_pair());
    v.push_back(p->UR->UL->c_pair());
    v.push_back(p->UL->c_pair());
    p->UR->UL->DR = p->UR->UL->DL = Used;
    p->UR->DL = p->UR->UL = Used;
    p->UL->DR = p->UL->UR = Used;
    p->UR = p->UL = Used;
  }
  if (t == 7) {
    if (!nhk(p->UR)) return;
    if (!nhk(p->DR)) return;
    if (!nhk(p->UR->DR)) return;
    v.push_back(p->UR->c_pair());
    v.push_back(p->UR->DR->c_pair());
    v.push_back(p->DR->c_pair());
    p->UR->DR->UL = p->UR->DR->DL = Used;
    p->UR->DL = p->UR->DR = Used;
    p->DR->UL = p->DR->UR = Used;
    p->UR = p->DR = Used;
  }
  if (t == 8) {
    if (!nhk(p->UL)) return;
    if (!nhk(p->DL)) return;
    if (!nhk(p->UL->DL)) return;
    v.push_back(p->UL->c_pair());
    v.push_back(p->UL->DL->c_pair());
    v.push_back(p->DL->c_pair());
    p->UL->DL->UR = p->UL->DL->DR = Used;
    p->UL->DR = p->UL->DL = Used;
    p->DL->UR = p->DL->UL = Used;
    p->UL = p->DL = Used;
  }
  ans.push_back(v);
  Debug("pushed", i, j, v);
}

int main() {
  auto start = chrono::system_clock::now();
  Debug("started");
  Point t(-1, -1), u(-1, -1);
  Used = &t, Null = &u;
  Debug("init");
  input();
  ans.reserve(n * n);
  Debug("input done");
  while (true) {
    auto now = chrono::system_clock::now();
    if (chrono::duration_cast<chrono::milliseconds>(now - start).count() > 4800) break;
    int d = 0;
    while (d <= n / 2) {
      rep(j, n) connect(d, j);          // うえ
      rep(i, n) connect(i, n - d - 1);  // みぎ
      rep(j, n) connect(n - d - 1, j);  // した
      rep(i, n) connect(i, d);          // ひだり
      d++;
    }
  }
  Debug(ans);
  Debug("done");
  printf("%zu\n", ans.size());
  for (auto& v : ans) {
    Debug(v);
    printf("%d %d %d %d %d %d %d %d\n", v[0].first, v[0].second, v[1].first, v[1].second, v[2].first, v[2].second, v[3].first, v[3].second);
  }
  Debug("output");
  return 0;
}