/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc008/submissions/29327090
 * Submitted at: 2022-02-14 11:46:26
 * Problem URL: https://atcoder.jp/contests/ahc008/tasks/ahc008_a
 * Result: AC
 * Execution Time: 54 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

// ----- Types ----- //
struct Point {
  int x, y;
  Point operator+(const Point& p) const {
    return { x + p.x, y + p.y };
  }
  void operator+=(const Point& p) {
    x += p.x;
    y += p.y;
  }
  void operator=(const Point& p) {
    x = p.x;
    y = p.y;
  }
  bool operator==(const Point& p) {
    return (x == p.x) && (y == p.y);
  }
  bool operator<(const Point& p) const {
    return tie(x, y) < tie(p.x, p.y);
  }
};

enum Pets
{
  Cow,
  Pig,
  Rabbit,
  Dog,
  Cat
};
enum Direction
{
  Up,
  Down,
  Left,
  Right
};

// ----- Constants ----- //
const Point dirs[4] = {
  { -1, 0 },
  { 1, 0 },
  { 0, -1 },
  { 0, 1 }
};
const string Fence = "udlr";
const string Move = "UDLR";

// ----- Variables ----- //
vector<pair<Point, Pets>> pets;
int n;
int m;
map<Point, bool> fencePlaced;

struct Human {
  Point pos;
  bool acted = false;
  bool reachedBottom = true;
  int nxtF = 1;
  void move(enum Direction dir) {
    pos += dirs[dir];
    cout << Move[dir];
    acted = true;
  }
  void fence(enum Direction dir) {
    Point p = pos + dirs[dir];
    fencePlaced[p] = true;
    cout << Fence[dir];
    acted = true;
  }
  void DoNothing() {
    cout << ".";
    acted = true;
  }
};
vector<Human> human;

// ----- Functions ----- //
bool canPlaceFence(const Point& p) {
  if (p.x <= 0 || p.y <= 0 || p.x > 30 || p.y > 30) return false;
  if (fencePlaced[p]) return false;
  for (auto [point, _] : pets) {
    if (point == p) return false;
    rep(i, 4) {
      if (p + dirs[i] == point) return false;
    }
  }
  for (auto h : human) {
    if (h.pos == p) return false;
  }
  return true;
}
void firstinput() {
  cin >> n;
  pets.resize(n);
  rep(i, n) {
    int x, y, t;
    cin >> x >> y >> t;
    pets[i] = { Point { x, y }, (enum Pets)(t - 1) };
  }
  cin >> m;
  human.resize(m);
  rep(i, m) {
    cin >> human[i].pos.x >> human[i].pos.y;
  }
}
bool canMoveTo(const Point& p) {
  bool ret = true;
  ret &= p.x >= 1;
  ret &= p.x <= 30;
  ret &= p.y >= 1;
  ret &= p.y <= 30;
  ret &= !fencePlaced[p];
  return ret;
}
void input_aftersol() {
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, s.size()) {
      if (s[j] == '.') continue;
      rep(k, 4) {
        if (s[j] == Move[k]) {
          pets[i].first += dirs[k];
          break;
        }
      }
    }
  }
}

// ----- Main ----- //
void solve(int d) {
  int breakpoint = round(n * log(2)) - 1;
  rep(i, m) {
    if (i >= breakpoint) {
      if (canMoveTo(human[i].pos + dirs[Right])) human[i].move(Right);
      else
        human[i].DoNothing();
      continue;
    }
    if (human[i].pos.y != (i + 1) * 30 / breakpoint) {
      if (human[i].pos.y > (i + 1) * 30 / breakpoint) human[i].move(Left);
      else
        human[i].move(Right);
    }
    else if (i == min(breakpoint - 1, m - 1))
      human[i].DoNothing();
    else if (human[i].pos.x > human[i].nxtF && human[i].reachedBottom)
      human[i].move(Up);
    else if (d < 30)
      human[i].DoNothing();
    else if (human[i].pos.x == human[i].nxtF && canPlaceFence(human[i].pos + dirs[Right])) {
      human[i].fence(Right);
      human[i].nxtF++;
    }
    else if (human[i].pos.x < human[i].nxtF && canMoveTo(human[i].pos + dirs[Down]))
      human[i].move(Down);

    if (!human[i].acted) human[i].DoNothing();
  }
  cout << endl;
  rep(i, m) human[i].acted = false;
}

int main() {
  firstinput();
  rep(_, 300) {
    solve(_);
    input_aftersol();
  }
  return 0;
}