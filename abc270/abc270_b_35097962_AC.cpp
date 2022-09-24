/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35097962
 * Submitted at: 2022-09-24 21:09:29
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_b
 * Result: AC
 * Execution Time: 12 ms
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

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  bool p = false;
  if ((y < 0 && y < x) || (y > 0 && x < y)) {
    cout << abs(x) << endl;
    p = true;
  }
  else if ((y < 0 && z < 0 && y < z) || (y > 0 && z > 0 && z < y) && (x * y > 0)) {
    cout << abs(x) << endl;
  }
  else if ((y < 0 && x < y && y < z) || (y > 0 && x > y && y > z)) {
    cout << abs(z) + abs(x - z) << endl;
  }
  else {
    cout << -1 << endl;
  }
  return 0;
}