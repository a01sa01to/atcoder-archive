/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc008/submissions/29365081
 * Submitted at: 2022-02-16 14:51:30
 * Problem URL: https://atcoder.jp/contests/ahc008/tasks/ahc008_a
 * Result: AC
 * Execution Time: 47 ms
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
#define Pt(x, y) \
  Point { x, y }

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
    return tie(x, y) == tie(p.x, p.y);
  }
  bool operator<(const Point& p) const {
    return tie(x, y) < tie(p.x, p.y);
  }
  int dir(const Point& p) {
    int ret = 0;
    if (x > p.x) ret |= 1;
    if (x < p.x) ret |= 2;
    if (y > p.y) ret |= 4;
    if (y < p.y) ret |= 8;
    return ret;
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

// ----- Prototype Def ----- //
bool canMoveTo(const Point& p);
bool canPlaceFence(const Point& p);

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
int numofdogs = 0;

struct Human {
  Point pos, prev;
  bool acted = false;
  bool at1 = false;  // 最初の集合場所（左右の一番下）
  bool re = false;   // 2人だけ、最初が違う
  bool at2 = false;  // 2番目（真ん中下）
  bool at3 = false;  // 3番目（4等分の）
  void move(enum Direction dir) {
    prev = pos;
    pos += dirs[dir];
    cout << Move[dir];
    acted = true;
  }
  void fence(enum Direction dir) {
    Point p = pos + dirs[dir];
    prev = pos;
    fencePlaced[p] = true;
    cout << Fence[dir];
    acted = true;
  }
  void DoNothing() {
    prev = pos;
    cout << ".";
    acted = true;
  }
  void headTo(Point p) {
    if (p == pos) DoNothing();
    else {
      int d = pos.dir(p);
      if (d & 1 && !acted && canMoveTo(pos + dirs[Up])) move(Up);
      if (d & 2 && !acted && canMoveTo(pos + dirs[Down])) move(Down);
      if (d & 4 && !acted && canMoveTo(pos + dirs[Left])) move(Left);
      if (d & 8 && !acted && canMoveTo(pos + dirs[Right])) move(Right);
      if (!acted) DoNothing();
    }
  }
};
vector<Human> human;

// ----- Functions ----- //
bool canMoveTo(const Point& p) {
  bool ret = true;
  ret &= p.x >= 1;
  ret &= p.x <= 30;
  ret &= p.y >= 1;
  ret &= p.y <= 30;
  ret &= !fencePlaced[p];
  return ret;
}
bool canPlaceFence(const Point& p, const int _) {
  if (!canMoveTo(p)) return false;
  for (auto [point, _] : pets) {
    if (point == p) return false;
    rep(i, 4) {
      if (p + dirs[i] == point) return false;
    }
  }
  for (Human& h : human) {
    if (h.pos == p) return false;
  }
  rep(i, _) if (human[i].prev == p) return false;
  return true;
}
void firstinput() {
  cin >> n;
  pets.resize(n);
  rep(i, n) {
    int x, y, t;
    cin >> x >> y >> t;
    pets[i] = { Pt(x, y), (enum Pets)(t - 1) };
    if (pets[i].second == Dog) numofdogs++;
  }
  cin >> m;
  human.resize(m);
  rep(i, m) {
    cin >> human[i].pos.x >> human[i].pos.y;
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
int cntPets(const Point& p1, const Point& p2) {
  int ret = 0;
  rep(i, n) {
    bool chk = true;
    chk &= (p1.x <= pets[i].first.x && pets[i].first.x <= p2.x);
    chk &= (p1.y <= pets[i].first.y && pets[i].first.y <= p2.y);
    if (chk) ret++;
  }
  return ret;
}

// ----- Main ----- //

// Step1: x=29,y=2~29にフェンス・人を(30,1),(30,30)に集める
void step1() {
  rep(i, m - 2) {
    if (i < (m - 2) / 2) {
      human[i].headTo(Pt(30, 1));
      if (human[i].pos == Pt(30, 1)) human[i].at1 = true;
    }
    else {
      human[i].headTo(Pt(30, 30));
      if (human[i].pos == Pt(30, 30)) human[i].at1 = true;
    }
  }
  rep(i, 2) {
    Human* h = &human[m - 2 + i];
    if (!h->re) {
      h->headTo(Pt(30, 15 + i));
      if (h->pos == Pt(30, 15 + i)) h->re = true;
    }
    else {
      if (h->pos == Pt(30, 29 * i + 1)) {
        h->DoNothing();
        h->at1 = true;
      }
      else if (canPlaceFence(h->pos + dirs[Up], m - 2 + i))
        h->fence(Up);
      else if (fencePlaced[h->pos + dirs[Up]] && canMoveTo(h->pos + dirs[(enum Direction)(Left + i)])) {
        h->move((enum Direction)(Left + i));
      }
      else {
        h->DoNothing();
      }
    }
  }
}

// Step2: イッヌを閉じ込める
void step2() {
  int cnt = 0;
  rep(i, n) {
    if (pets[i].second == Dog) {
      if (pets[i].first.x == 30) cnt++;
    }
  }
  if (cnt < numofdogs) {
    rep(i, m) human[i].DoNothing();
  }
  else if (canPlaceFence(Pt(30, 2), 0) && canPlaceFence(Pt(30, 29), 0)) {
    rep(i, m) {
      if (canPlaceFence(human[i].pos + dirs[Right], i)) {
        human[i].fence(Right);
      }
      else if (canPlaceFence(human[i].pos + dirs[Left], i)) {
        human[i].fence(Left);
      }
      else {
        human[i].DoNothing();
      }
    }
  }
  else {
    rep(i, m) human[i].DoNothing();
  }
}

// Step3: 縦（2等分目）
void step3() {
  if (human[0].pos == human[m - 1].pos) {
    rep(i, m - 1) {
      if (canMoveTo(human[i].pos + dirs[Up])) human[i].move(Up);
      else
        human[i].DoNothing();
    }
    if (canPlaceFence(human[m - 1].pos + dirs[Down], m - 1)) human[m - 1].fence(Down);
    else
      human[m - 1].DoNothing();
  }
  else {
    rep(i, m - 1) {
      human[i].DoNothing();
    }
    if (canPlaceFence(human[m - 1].pos + dirs[Down], m - 1)) human[m - 1].fence(Down);
    else if (fencePlaced[human[m - 1].pos + dirs[Down]] && canMoveTo(human[m - 1].pos + dirs[Up]))
      human[m - 1].move(Up);
    else
      human[m - 1].DoNothing();
  }
}

// Step4: 横（4等分目）
void step4() {
  if (fencePlaced[Pt(1, 14)]) {  // 右
    if (human[0].pos == human[m - 1].pos) {
      rep(i, m - 1) {
        if (canMoveTo(human[i].pos + dirs[Right])) human[i].move(Right);
        else
          human[i].DoNothing();
      }
      if (canPlaceFence(human[m - 1].pos + dirs[Left], m - 1)) human[m - 1].fence(Left);
      else
        human[m - 1].DoNothing();
    }
    else {
      rep(i, m - 1) {
        human[i].DoNothing();
      }
      if (canPlaceFence(human[m - 1].pos + dirs[Left], m - 1)) human[m - 1].fence(Left);
      else if (fencePlaced[human[m - 1].pos + dirs[Left]] && canMoveTo(human[m - 1].pos + dirs[Right]))
        human[m - 1].move(Right);
      else
        human[m - 1].DoNothing();
    }
  }
  else {  // 左
    if (human[0].pos == human[m - 1].pos) {
      rep(i, m - 1) {
        if (canMoveTo(human[i].pos + dirs[Left])) human[i].move(Left);
        else
          human[i].DoNothing();
      }
      if (canPlaceFence(human[m - 1].pos + dirs[Right], m - 1)) human[m - 1].fence(Right);
      else
        human[m - 1].DoNothing();
    }
    else {
      rep(i, m - 1) {
        human[i].DoNothing();
      }
      if (canPlaceFence(human[m - 1].pos + dirs[Right], m - 1)) human[m - 1].fence(Right);
      else if (fencePlaced[human[m - 1].pos + dirs[Right]] && canMoveTo(human[m - 1].pos + dirs[Left]))
        human[m - 1].move(Left);
      else
        human[m - 1].DoNothing();
    }
  }
}

void solve(int d) {
  bool at1All = true;
  rep(i, m) at1All &= human[i].at1;
  if (fencePlaced[Pt(30, 2)] && fencePlaced[Pt(30, 29)]) {
    bool at2All = true;
    rep(i, m) at2All &= human[i].at2;
    if (!at2All) {
      rep(i, m) {
        human[i].headTo(Pt(27, 15));
        if (human[i].pos == Pt(27, 15)) human[i].at2 = true;
      }
    }
    else if (fencePlaced[Pt(2, 15)] && (fencePlaced[Pt(1, 14)] || fencePlaced[Pt(1, 16)])) {
      bool at3All = true;
      rep(i, m) at3All &= human[i].at3;
      if (!at3All) {
        if (fencePlaced[Pt(1, 14)]) {
          rep(i, m) {
            human[i].headTo(Pt(15, 17));
            if (human[i].pos == Pt(15, 17)) human[i].at3 = true;
          }
        }
        else {
          rep(i, m) {
            human[i].headTo(Pt(15, 13));
            if (human[i].pos == Pt(15, 13)) human[i].at3 = true;
          }
        }
      }
      else if (fencePlaced[Pt(14, 1)] || fencePlaced[Pt(16, 1)] || fencePlaced[Pt(14, 30)] || fencePlaced[Pt(16, 30)]) {
        rep(i, m) human[i].DoNothing();
      }
      else if (fencePlaced[Pt(15, 2)]) {
        int up = cntPets(Pt(1, 1), Pt(14, 14)) + cntPets(Pt(1, 15), Pt(1, 15));
        int dw = cntPets(Pt(16, 1), Pt(28, 14)) + cntPets(Pt(29, 1), Pt(30, 1));
        rep(i, m - 1) human[i].DoNothing();
        if (up > dw) {
          if (canPlaceFence(Pt(14, 1), m - 1)) human[m - 1].fence(Up);
          else
            human[m - 1].DoNothing();
        }
        else {
          if (canPlaceFence(Pt(16, 1), m - 1)) human[m - 1].fence(Down);
          else
            human[m - 1].DoNothing();
        }
      }
      else if (fencePlaced[Pt(15, 29)]) {
        int up = cntPets(Pt(1, 16), Pt(14, 30)) + cntPets(Pt(1, 15), Pt(1, 15));
        int dw = cntPets(Pt(16, 16), Pt(28, 30)) + cntPets(Pt(29, 30), Pt(30, 30));
        rep(i, m - 1) human[i].DoNothing();
        if (up > dw) {
          if (canPlaceFence(Pt(14, 30), m - 1)) human[m - 1].fence(Up);
          else
            human[m - 1].DoNothing();
        }
        else {
          if (canPlaceFence(Pt(16, 30), m - 1)) human[m - 1].fence(Down);
          else
            human[m - 1].DoNothing();
        }
      }
      else {
        step4();
      }
    }
    else if (fencePlaced[Pt(2, 15)]) {
      int l = cntPets(Pt(1, 1), Pt(28, 14)) + cntPets(Pt(29, 1), Pt(30, 1));
      int r = cntPets(Pt(1, 16), Pt(28, 30)) + cntPets(Pt(29, 30), Pt(30, 30));
      rep(i, m - 1) human[i].DoNothing();
      if (l > r) {
        if (canPlaceFence(Pt(1, 14), m - 1)) human[m - 1].fence(Left);
        else
          human[m - 1].DoNothing();
      }
      else {
        if (canPlaceFence(Pt(1, 16), m - 1)) human[m - 1].fence(Right);
        else
          human[m - 1].DoNothing();
      }
    }
    else
      step3();
  }
  else if (!at1All)
    step1();
  else
    step2();
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