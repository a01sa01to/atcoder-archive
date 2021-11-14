/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc006/submissions/27255189
 * Submitted at: 2021-11-14 17:46:20
 * Problem URL: https://atcoder.jp/contests/ahc006/tasks/ahc006_a
 * Result: AC
 * Execution Time: 1713 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

struct Point {
  int x, y;
};
struct Route {
  Point dist;
  Point from;
};

chrono::system_clock::time_point start;
vector<Route> routes(1000);
vector<int> collecting, returning;
set<int> use;
Point start_point;

ld random_double(ld minim = 0, ld maxim = 1) {
  random_device rnd;
  mt19937 mt(rnd());
  uniform_real_distribution<ld> rand(minim, maxim);
  return rand(mt);
}
int calcManhattan(Point a, Point b) {
  return abs(a.x - b.x) + abs(a.y - b.y);
}
int calcDistance() {
  int ans = 0;
  for (int i = 0; i < collecting.size(); i++) {
    if (i < 1) ans += calcManhattan(routes[collecting[i]].from, start_point);
    else
      ans += calcManhattan(routes[collecting[i - 1]].from, routes[collecting[i]].from);
  }
  for (int i = 0; i < returning.size(); i++) {
    if (i < 1) ans += calcManhattan(routes[returning[i]].dist, routes[collecting.back()].from);
    else
      ans += calcManhattan(routes[returning[i - 1]].dist, routes[returning[i]].dist);
  }
  ans += calcManhattan(routes[returning.back()].dist, start_point);
  return ans;
}
void debug_print(vector<int>& _collecting, vector<int>& _returning, set<int>& _use) {
  printf("50");
  for (int x : _use) printf(" %d", x + 1);
  putchar('\n');
  printf("102 400 400");
  for (int i = 0; i < _collecting.size(); i++) printf(" %d %d", routes[_collecting[i]].from.x, routes[_collecting[i]].from.y);
  for (int i = 0; i < _returning.size(); i++) printf(" %d %d", routes[_returning[i]].dist.x, routes[_returning[i]].dist.y);
  printf(" 400 400\n");
}
int deltaT(chrono::system_clock::time_point now) {
  return chrono::duration_cast<chrono::milliseconds>(now - start).count();
}
void Annealing() {
  vector<int> best_collecting = collecting, best_returning = returning;
  set<int> bestUse = use;
  int bestState = calcDistance();
  int try_cnt = 0;
  while (true) {
    try_cnt++;
    chrono::system_clock::time_point now = chrono::system_clock::now();
    if (now - start > chrono::milliseconds(1700)) {
      collecting = best_collecting;
      returning = best_returning;
      return;
    }
    int rem_idx = random_double(0, 49.9999);
    int nxt_idx = random_double(0, 999.999);
    if (use.count(nxt_idx)) {
      auto itr = find(all(collecting), nxt_idx);
      int dista = distance(collecting.begin(), itr);
      swap(collecting[dista], collecting[rem_idx]);
      itr = find(all(returning), nxt_idx);
      dista = distance(returning.begin(), itr);
      swap(returning[dista], returning[rem_idx]);
    }
    else {
      use.erase(collecting[rem_idx]);
      use.insert(nxt_idx);
      auto itr = find(all(returning), collecting[rem_idx]);
      int dista = distance(returning.begin(), itr);
      collecting[rem_idx] = nxt_idx;
      returning[dista] = nxt_idx;
    }
    int nextState = calcDistance();
    if (nextState < bestState) {
      best_collecting = collecting;
      best_returning = returning;
      bestState = nextState;
      bestUse = use;
    }
    else {
      // cout << "[DEB1] " << bestState - nextState << endl;
      ld prob = exp(ld(bestState - nextState) / pow(0.3, deltaT(now) / 1700.0));
      if (random_double(0, 1) < prob) {
        best_collecting = collecting;
        best_returning = returning;
        bestState = nextState;
        bestUse = use;
      }
      else {
        collecting = best_collecting;
        returning = best_returning;
        use = bestUse;
      }
    }
    // cout << "[DEB] " << try_cnt << " " << bestState << endl;
  }
}

int main() {
  cout << fixed << setprecision(15);
  start = chrono::system_clock::now();

  // input
  start_point.x = 400;
  start_point.y = 400;
  rep(i, 1000) cin >> routes[i].from.x >> routes[i].from.y >> routes[i].dist.x >> routes[i].dist.y;

  // solve
  rep(t, 50) {
    int idx = -1;
    rep(i, 1000) {
      if (!use.count(i)) {
        if (idx == -1) idx = i;
        else {
          Point p = routes[i].from;
          Point d = routes[idx].from;
          if (collecting.empty()) {
            if (calcManhattan(p, start_point) < calcManhattan(d, start_point)) idx = i;
          }
          else {
            if (calcManhattan(p, routes[collecting.back()].from) < calcManhattan(d, routes[collecting.back()].from))
              idx = i;
          }
        }
      }
    }
    use.insert(idx);
    collecting.push_back(idx);
  }
  set<int> tmp;
  rep(t, 50) {
    int idx = -1;
    for (int x : use) {
      if (tmp.count(x)) continue;
      if (idx == -1) idx = x;
      else {
        Point p = routes[x].dist;
        Point d = routes[idx].dist;
        if (returning.empty()) {
          if (calcManhattan(p, routes[collecting.back()].from) < calcManhattan(d, routes[collecting.back()].from)) idx = x;
        }
        else {
          if (calcManhattan(p, routes[returning.back()].from) < calcManhattan(d, routes[returning.back()].from))
            idx = x;
        }
      }
    }
    tmp.insert(idx);
    returning.push_back(idx);
  }
  Annealing();

  // output
  printf("50");
  for (int x : use) printf(" %d", x + 1);
  putchar('\n');
  printf("102 400 400");
  for (int i = 0; i < collecting.size(); i++) printf(" %d %d", routes[collecting[i]].from.x, routes[collecting[i]].from.y);
  for (int i = 0; i < returning.size(); i++) printf(" %d %d", routes[returning[i]].dist.x, routes[returning[i]].dist.y);
  printf(" 400 400\n");
  return 0;
}