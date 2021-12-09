/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc051/submissions/27774881
 * Submitted at: 2021-12-09 11:52:30
 * Problem URL: https://atcoder.jp/contests/arc051/tasks/arc051_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; ++i)

int sqr(int x) { return x * x; }

int main() {
  int x1, y1, r, x2, y2, x3, y3;
  cin >> x1 >> y1 >> r >> x2 >> y2 >> x3 >> y3;
  // 赤: 円
  // 青: 長方形
  // 赤が存在しない = 長方形に囲まれる
  // -> 上 y1+r <= y3
  // -> 下 y1-r >= y2
  // -> 左 x1-r >= x2
  // -> 右 x1+r <= x3
  if (y1 + r <= y3 && y1 - r >= y2 && x1 - r >= x2 && x1 + r <= x3) {
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
  }
  // 青が存在しない = 円に囲まれる
  // 長方形の各点が円の中にある
  // -> dist(x1,y1,x2,y2) <= r
  // -> dist(x1,y1,x3,y3) <= r
  // -> dist(x1,y1,x2,y3) <= r
  // -> dist(x1,y1,x3,y2) <= r
  if (sqr(x1 - x2) + sqr(y1 - y2) <= sqr(r) && sqr(x1 - x3) + sqr(y1 - y3) <= sqr(r) && sqr(x1 - x2) + sqr(y1 - y3) <= sqr(r) && sqr(x1 - x3) + sqr(y1 - y2) <= sqr(r)) {
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
  }
  return 0;
}