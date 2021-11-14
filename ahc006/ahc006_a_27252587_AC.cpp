/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc006/submissions/27252587
 * Submitted at: 2021-11-14 16:24:54
 * Problem URL: https://atcoder.jp/contests/ahc006/tasks/ahc006_a
 * Result: AC
 * Execution Time: 11 ms
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
struct route {
  Point dist;
  Point from;
};
int calcManhattan(Point a, Point b) {
  return abs(a.x - b.x) + abs(a.y - b.y);
}

int main() {
  cout << fixed << setprecision(15);
  // input
  vector<route> routes(1000);
  rep(i, 1000) cin >> routes[i].from.x >> routes[i].from.y >> routes[i].dist.x >> routes[i].dist.y;

  // solve
  vector<Point> ans;
  set<int> use;
  ans.push_back({ 400, 400 });
  rep(t, 50) {
    int idx = -1;
    rep(i, 1000) {
      if (!use.count(i)) {
        if (idx == -1) idx = i;
        else {
          Point p = routes[i].from;
          Point d = routes[idx].from;
          if (calcManhattan(p, ans.back()) < calcManhattan(d, ans.back())) idx = i;
        }
      }
    }
    use.insert(idx);
    ans.push_back(routes[idx].from);
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
        if (calcManhattan(p, ans.back()) < calcManhattan(d, ans.back())) idx = x;
      }
    }
    ans.push_back(routes[idx].dist);
    tmp.insert(idx);
  }
  ans.push_back({ 400, 400 });
  // output
  printf("50");
  for (int x : use) printf(" %d", x + 1);
  putchar('\n');
  printf("102");
  for (int i = 0; i < ans.size(); i++) printf(" %d %d", ans[i].x, ans[i].y);
  putchar('\n');
  return 0;
}