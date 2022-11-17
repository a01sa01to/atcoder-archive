/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/36560168
 * Submitted at: 2022-11-18 00:19:29
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_e
 * Result: AC
 * Execution Time: 40 ms
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

using mint = modint1000000007;
void operator<<(ostream &os, mint x) { os << x.val(); }

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector dp(n + 1, vector<int>(3, 0));
  rep(i, n) {
    dp[i + 1] = dp[i];
    if (a[i] == dp[i][0])
      dp[i + 1][0] = dp[i][0] + 1;
    else if (a[i] == dp[i][1])
      dp[i + 1][1] = dp[i][1] + 1;
    else if (a[i] == dp[i][2])
      dp[i + 1][2] = dp[i][2] + 1;
  }
  Debug(dp);
  mint ans = 1;
  rep(i, n) {
    int tmp = 0;
    rep(j, 3) tmp += (a[i] == dp[i][j]);
    ans *= tmp;
  }
  cout << ans.val() << endl;
  return 0;
}