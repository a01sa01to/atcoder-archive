/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28570918
 * Submitted at: 2022-01-16 00:58:43
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_r
 * Result: WA
 * Execution Time: 14 ms
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
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct Point {
  ld x, y, z;
};

int main() {
  int t, l, x, y, q;
  cin >> t >> l >> x >> y >> q;
  const ld Pi = acos(-1);
  rep(_, q) {
    int e;
    cin >> e;
    ld theta = ld(e) / t * (2 * Pi);
    Point e8kun = { 0, -ld(l) / 2 * sin(theta), ld(l) / 2 * (cos(theta) - 1) };
    Debug(e8kun.y);
    Debug(e8kun.z);

    ld dy = y - e8kun.y;
    ld dist = sqrt(x * x + dy * dy + e8kun.z * e8kun.z);
    ld sine = e8kun.z / dist;
    Debug(theta);
    Debug(dist);
    Debug(sine);
    cout << fixed << setprecision(15) << abs(asin(sine) * 180 / Pi) << endl;
  }
  return 0;
}