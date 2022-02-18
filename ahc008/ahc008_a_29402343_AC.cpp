/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc008/submissions/29402343
 * Submitted at: 2022-02-18 17:46:01
 * Problem URL: https://atcoder.jp/contests/ahc008/tasks/ahc008_a
 * Result: AC
 * Execution Time: 45 ms
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
void step1();
void step2();
void step3(bool at5All);
void step4(int i);

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
vector<int> fenceRow;

struct Human {
  Point pos, prev;
  bool acted = false;
  bool at1 = false;  // 最初の集合場所（左右の一番下）
  bool re = false;   // 2人だけ、最初が違う
  bool at2 = false;  // 2番目（それぞれのm+1等分の位置）
  bool at3 = false;  // 3番目（下終わり）
  bool at4 = false;  // 4番目（上に行った）
  bool at5 = false;  // 5番目（上終わり）
  bool at6 = false;  // 6番目（あつまり）
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

// Step3: 縦と横
void step3(bool at5All) {
  rep(i, m) {
    if (i == m - 1 && !at5All) {
      human[i].DoNothing();
      continue;
    }
    if (human[i].at5) {
      step4(i);
    }
    else if (human[i].at4) {
      // 上を埋める
      if (canPlaceFence(human[i].pos + dirs[Up], i)) {
        human[i].fence(Up);
        if (human[i].pos == Pt(14, human[i].pos.y)) human[i].at5 = true;
      }
      else if (fencePlaced[human[i].pos + dirs[Up]] && canMoveTo(human[i].pos + dirs[Down]))
        human[i].move(Down);
      else
        human[i].DoNothing();
    }
    else if (human[i].at3) {
      // 上に行く
      human[i].headTo(Pt(2, human[i].pos.y));
      if (human[i].pos == Pt(2, human[i].pos.y)) human[i].at4 = true;
    }
    else {
      // 下を埋める
      if (canPlaceFence(human[i].pos + dirs[Down], i)) {
        human[i].fence(Down);
        if (human[i].pos == Pt(14, human[i].pos.y)) human[i].at3 = true;
      }
      else if (fencePlaced[human[i].pos + dirs[Down]] && canMoveTo(human[i].pos + dirs[Up]))
        human[i].move(Up);
      else
        human[i].DoNothing();
    }
  }
}

// Step4: 横
void step4(int i) {
  int l = fenceRow[i] + 1, r = fenceRow[i + 1] - 1;
  int u = cntPets(Pt(1, l), Pt(13, r)), d = cntPets(Pt(15, l), Pt(28, r));
  if (i == 0) d += cntPets(Pt(29, 1), Pt(30, 1));
  if (i == m - 1) u += cntPets(Pt(29, 30), Pt(30, 30));

  if (u && canPlaceFence(human[i].pos + dirs[Up], i)) human[i].fence(Up);
  else if (d && canPlaceFence(human[i].pos + dirs[Down], i))
    human[i].fence(Down);
  else if (human[i].at6 && canMoveTo(human[i].pos + dirs[Right])) {
    // 右に向かう
    human[i].move(Right);
    if (human[i].pos.y == r) human[i].at6 = false;
  }
  else if (!human[i].at6 && canMoveTo(human[i].pos + dirs[Left])) {
    // 左に向かう
    human[i].move(Left);
    if (human[i].pos.y == l) human[i].at6 = true;
  }
  else {
    human[i].DoNothing();
  }
}

void solve(int d) {
  bool at1All = true;
  bool at2All = true;
  bool at3All = true;
  bool at4All = true;
  bool at5All = true;
  bool at6All = true;
  rep(i, m) {
    at1All &= human[i].at1;
    at2All &= human[i].at2;
    at3All &= human[i].at3;
    at4All &= human[i].at4;
    at5All &= human[i].at5;
    at6All &= human[i].at6;
  }

  if (fencePlaced[Pt(30, 2)] && fencePlaced[Pt(30, 29)]) {
    if (at2All)
      step3(at5All);
    else {
      rep(i, m) {
        // それぞれの位置に移動
        int ny = fenceRow[i + 1];
        if (ny == 31) {
          human[i].headTo(Pt(14, 30));
          if (human[i].pos == Pt(14, 30)) {
            human[i].at2 = human[i].at3 = human[i].at4 = human[i].at5 = true;
          }
        }
        else {
          human[i].headTo(Pt(27, ny));
          if (human[i].pos == Pt(27, ny)) human[i].at2 = true;
        }
      }
    }
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
  fenceRow.push_back(0);
  rep(i, m - 1) fenceRow.push_back(30 * (i + 1) / m);
  fenceRow.push_back(31);
  rep(_, 300) {
    solve(_);
    input_aftersol();
  }
  return 0;
}