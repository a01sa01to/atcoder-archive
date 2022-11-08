/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc042/submissions/36330227
 * Submitted at: 2022-11-09 00:26:09
 * Problem URL: https://atcoder.jp/contests/arc042/tasks/arc042_b
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

struct Vec {
  int x, y;
  Vec(int _x, int _y): x(_x), y(_y) {}
  int dot(const Vec r) {
    return x * r.x + y * r.y;
  }
  double abs() {
    return sqrt(double(x * x + y * y));
  }
};
void operator<<(ostream& c, Vec& v) {
  c << "(" << v.x << "," << v.y << ")";
}

int main() {
  int x, y;
  cin >> x >> y;
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  v.push_back(v.front());

  double ans = 1e9;
  rep(i, n) {
    Vec a(x - v[i].first, y - v[i].second);
    Vec b(v[i + 1].first - v[i].first, v[i + 1].second - v[i].second);
    Debug(a, b);
    Debug(a.dot(b), a.abs(), b.abs());
    double cosine = a.dot(b) / a.abs() / b.abs();
    double sine = sqrt(1 - cosine * cosine);
    Debug(sine);
    ans = min(ans, a.abs() * sine);
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}