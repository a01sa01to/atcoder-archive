/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35878873
 * Submitted at: 2022-10-22 21:27:14
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_d
 * Result: AC
 * Execution Time: 135 ms
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
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  map<int, bool> mpX, mpY;
  mpX[a[0]] = true, mpY[0] = true;
  rep(i, n) {
    if (i == 0) continue;
    map<int, bool> nmpX, nmpY;
    if (i % 2) {
      for (auto [k, v] : mpY) {
        nmpY[k + a[i]] = true;
        nmpY[k - a[i]] = true;
      }
      swap(mpY, nmpY);
    }
    else {
      for (auto [k, v] : mpX) {
        nmpX[k + a[i]] = true;
        nmpX[k - a[i]] = true;
      }
      swap(mpX, nmpX);
    }
  }
  cout << (mpX[x] && mpY[y] ? "Yes" : "No") << endl;
  return 0;
}