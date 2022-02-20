/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc184/submissions/29551433
 * Submitted at: 2022-02-21 00:02:31
 * Problem URL: https://atcoder.jp/contests/abc184/tasks/abc184_d
 * Result: AC
 * Execution Time: 59 ms
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
typedef long double ld;

ld memo[101][101][101];
ld dp(int x, int y, int z) {
  if (x == 100 || y == 100 || z == 100) return memo[x][y][z] = 0;
  if (memo[x][y][z] > 0) return memo[x][y][z];
  memo[x][y][z] += x / ld(x + y + z) * (dp(x + 1, y, z) + 1);
  memo[x][y][z] += y / ld(x + y + z) * (dp(x, y + 1, z) + 1);
  memo[x][y][z] += z / ld(x + y + z) * (dp(x, y, z + 1) + 1);
  return memo[x][y][z];
}

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  cout << fixed << setprecision(15) << dp(x, y, z) << endl;
  return 0;
}