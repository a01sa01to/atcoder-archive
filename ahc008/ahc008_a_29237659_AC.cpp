/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc008/submissions/29237659
 * Submitted at: 2022-02-12 17:51:03
 * Problem URL: https://atcoder.jp/contests/ahc008/tasks/ahc008_a
 * Result: AC
 * Execution Time: 49 ms
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
const string DoNothing = ".";

// ----- Variables ----- //
vector<pair<Point, Pets>> pets;
vector<pair<Point, pair<bool, bool>>> human;
int n;
int m;
map<Point, bool> fencePlaced;

// ----- Functions ----- //
void toggle(bool& b) { b = !b; }
bool canPlaceFence(const Point& p) {
  if (p.x <= 0 || p.y <= 0 || p.x > 30 || p.y > 30) return false;
  if (fencePlaced[p]) return false;
  for (auto [point, _] : pets) {
    if (point == p) return false;
    rep(i, 4) {
      if (p + dirs[i] == point) return false;
    }
  }
  for (auto [point, _] : human) {
    if (point == p) return false;
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
    cin >> human[i].first.x >> human[i].first.y;
    human[i].second = { false, false };
  }
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
  const int breakpoint = 7;
  rep(i, m) {
    if (i >= breakpoint) {
      if (human[i].first.y < 30) {
        cout << Move[Right];
        human[i].first.y++;
      }
      else {
        cout << DoNothing;
      }
      continue;
    }
    bool flag = false;
    if (human[i].first.y != (i + 1) * 30 / breakpoint) {
      if (human[i].first.y > (i + 1) * 30 / breakpoint) {
        cout << Move[Left];
        human[i].first.y--;
      }
      else {
        cout << Move[Right];
        human[i].first.y++;
      }
      flag = true;
    }
    else if (i == min(breakpoint - 1, m - 1)) {
      cout << DoNothing;
      flag = true;
    }
    else if (human[i].first.x > 1 && !human[i].second.first) {
      cout << Move[Up];
      human[i].first.x--;
      flag = true;
    }
    else if (d < 30) {
      cout << DoNothing;
      flag = true;
    }
    else if (human[i].first.x < 30) {
      human[i].second.first = true;
      if (human[i].second.second || !canPlaceFence(human[i].first + dirs[Right])) {
        cout << Move[Down];
        human[i].second.second = false;
        human[i].first.x++;
        flag = true;
      }
      else {
        cout << Fence[Right];
        fencePlaced[human[i].first + dirs[Right]] = true;
        human[i].second.first = true;
        flag = true;
      }
    }
    else if (human[i].first.x == 30) {
      if (canPlaceFence(human[i].first + dirs[Right])) {
        cout << Fence[Right];
        fencePlaced[human[i].first + dirs[Right]] = true;
        flag = true;
      }
      else {
        human[i].second = { false, false };
        cout << DoNothing;
        flag = true;
      }
    }
    if (!flag) {
      cout << DoNothing;
    }
  }
  cout << endl;
}

int main() {
  firstinput();
  rep(_, 300) {
    solve(_);
    input_aftersol();
  }
  return 0;
}