/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc008/submissions/29231590
 * Submitted at: 2022-02-12 13:06:08
 * Problem URL: https://atcoder.jp/contests/ahc008/tasks/ahc008_a
 * Result: WA
 * Execution Time: 79 ms
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
#define STR(var) #var

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

Point dirs[4] = {
  { -1, 0 },
  { 1, 0 },
  { 0, -1 },
  { 0, 1 }
};

const string FENCE = "udlr";
const string MOVE = "UDLR";

vector<pair<Point, Pets>> pets;
vector<pair<Point, int>> people;

bool canPlaceFence(const Point& p) {
  if (p.x <= 0 || p.y <= 0 || p.x > 30 || p.y > 30) return false;
  for (auto [point, _] : pets) {
    if (point == p) return false;
    rep(i, 4) {
      if (p + dirs[i] == point) return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  pets.resize(n);
  rep(i, n) {
    int x, y, t;
    cin >> x >> y >> t;
    pets[i] = { Point { x, y }, (enum Pets)(t - 1) };
  }
  int m;
  cin >> m;
  people.resize(m);
  rep(i, m) {
    cin >> people[i].first.x >> people[i].first.y;
    people[i].second = 0;
  }
  map<Point, bool> visited;
  rep(_, 300) {
    rep(i, m) {
      int x = -1;
      bool flag[4] = { !!(people[i].second & 1), !!(people[i].second & 2), !!(people[i].second & 4), !!(people[i].second & 8) };
      rep(k, 4) {
        flag[k] = flag[k] || visited[people[i].first + dirs[k]];
      }
      rep(k, 4) {
        if (!canPlaceFence(people[i].first + dirs[k])) {
          flag[k] = true;
        }
      }
      rep(k, 4) {
        if (!flag[k]) {
          x = k;
          break;
        }
      }
      if (x == -1) {
        cout << ".";
      }
      else {
        cout << FENCE[x];
        people[i].second |= (1 << x);
        visited[people[i].first + dirs[x]] = true;
      }
    }
    cout << endl;
    rep(i, n) {
      string s;
      cin >> s;
      rep(j, s.size()) {
        if (s[j] == '.') continue;
        rep(k, 4) {
          if (s[j] == MOVE[k]) {
            pets[i].first += dirs[k];
            break;
          }
        }
      }
    }
  }
  return 0;
}