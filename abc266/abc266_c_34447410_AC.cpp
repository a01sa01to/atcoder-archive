/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34447410
 * Submitted at: 2022-08-30 00:07:27
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_c
 * Result: AC
 * Execution Time: 6 ms
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

struct Point {
  int x, y;
  int operator*(const Point& p) const {
    return x * p.y - y * p.x;
  }
  Point operator-(const Point& p) const {
    return Point { x - p.x, y - p.y };
  }
};
istream& operator>>(istream& is, Point& p) { return is >> p.x >> p.y; }
ostream& operator<<(ostream& os, const Point& p) { return os << "(" << p.x << ", " << p.y << ")"; }

int main() {
  Point a, b, c, d;
  cin >> a >> b >> c >> d;
  bool f = true;
  if ((d - a) * (b - a) > 0) f = false;
  if ((a - b) * (c - b) > 0) f = false;
  if ((b - c) * (d - c) > 0) f = false;
  if ((c - d) * (a - d) > 0) f = false;
  Debug(a, b, c, d);
  Debug((d - a) * (b - a), (a - b) * (c - b), (b - c) * (d - c), (c - d) * (a - d));
  puts(f ? "Yes" : "No");
  return 0;
}