/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29133782
 * Submitted at: 2022-02-07 00:05:32
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ab
 * Result: AC
 * Execution Time: 218 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector Grid(1001, vector<int>(1001, 0));
  rep(i, n) {
    int lx, ly, rx, ry;
    cin >> lx >> ly >> rx >> ry;
    ++Grid[lx][ly];
    --Grid[lx][ry];
    --Grid[rx][ly];
    ++Grid[rx][ry];
  }
  // rep(i, 10) {
  //   rep(j, 10) {
  //     cout << Grid[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;
  rep(i, 1000) rep(j, 1001) Grid[i + 1][j] += Grid[i][j];
  rep(i, 1001) rep(j, 1000) Grid[i][j + 1] += Grid[i][j];
  // rep(i, 10) {
  //   rep(j, 10) {
  //     cout << Grid[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  vector<int> ans(n + 1, 0);
  rep(i, 1001) rep(j, 1001)++ ans[Grid[i][j]];
  rep(i, n) cout << ans[i + 1] << endl;
  return 0;
}