/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc108/submissions/25283642
 * Submitted at: 2021-08-23 01:12:48
 * Problem URL: https://atcoder.jp/contests/abc108/tasks/abc108_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int dx = x2 - x1;
  int dy = y2 - y1;
  // 回転行列 90度 : [[0,-1][1,0]]
  //  | 0 -1 | dx
  //  | 1  0 | dy
  // new dx = -dy
  // new dy = dx
  int x3 = x2 - dy;
  int y3 = y2 + dx;
  int x4 = x3 - dx;
  int y4 = y3 - dy;
  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
  return 0;
}