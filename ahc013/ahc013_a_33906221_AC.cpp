/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc013/submissions/33906221
 * Submitted at: 2022-08-10 00:00:20
 * Problem URL: https://atcoder.jp/contests/ahc013/tasks/ahc013_a
 * Result: AC
 * Execution Time: 8 ms
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

int n = 0, k;
vector c(n, vector<int>(n));
struct Point {
  int x, y;
  Point(int x, int y): x(x), y(y) {}
  Point operator+(const Point& p) {
    return Point(x + p.x, y + p.y);
  }
  Point operator-(const Point& p) {
    Point tmp = *this;
    return Point(x - p.x, y - p.y);
  }
};
const vector<Point> dir = {
  Point(0, 1),
  Point(1, 0),
  Point(0, -1),
  Point(-1, 0),
};

int main() {
  // Input
  cin >> n >> k;
  c.assign(n + 1, vector<int>(n + 1, -1));
  rep(i, n) rep(j, n) {
    char ch;
    cin >> ch;
    c[i][j] = ch - '0';
  }

  // Solve
  vector<pair<Point, Point>> move;
  vector<pair<Point, Point>> conn;
  rep(i, n) rep(j, n) {
    if (c[i][j] <= 0) continue;
    for (int k = i + 1; k <= n; ++k) {
      if (c[k][j] == 0) {
        c[k][j] = -1;
        continue;
      }
      else if (c[k][j] == c[i][j]) {
        conn.push_back({ Point(i, j), Point(k, j) });
      }
      else {
        for (int l = k - 1; l >= i + 1; l--) c[l][j] = 0;
      }
      break;
    }
    for (int k = j + 1; k <= n; ++k) {
      if (c[i][k] == 0) {
        c[i][k] = -1;
        continue;
      }
      else if (c[i][j] == c[i][k]) {
        conn.push_back({ Point(i, j), Point(i, k) });
      }
      else {
        for (int l = k - 1; l >= j + 1; l--) c[i][l] = 0;
      }
      break;
    }
  }

  // Output
  cout << move.size() << endl;
  for (auto p : move) {
    printf("%d %d %d %d\n", p.first.x, p.first.y, p.second.x, p.second.y);
  }
  cout << conn.size() << endl;
  for (auto p : conn) {
    printf("%d %d %d %d\n", p.first.x, p.first.y, p.second.x, p.second.y);
  }
  return 0;
}