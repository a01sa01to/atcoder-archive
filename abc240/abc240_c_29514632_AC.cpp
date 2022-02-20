/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/29514632
 * Submitted at: 2022-02-20 21:07:33
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_c
 * Result: AC
 * Execution Time: 9 ms
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
  int n, x;
  cin >> n >> x;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  // dp[i][j] = i番目まで見て、xの位置にいるか
  vector dp(n + 1, vector<bool>(x + 1, false));
  dp[0][0] = true;
  rep(i, n) {
    rep(j, x + 1) {
      if (dp[i][j]) {
        if (j + a[i] <= x) dp[i + 1][j + a[i]] = true;
        if (j + b[i] <= x) dp[i + 1][j + b[i]] = true;
      }
    }
  }
  cout << (dp[n][x] ? "Yes" : "No") << endl;
  return 0;
}