/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/33681996
 * Submitted at: 2022-07-31 22:04:19
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_d
 * Result: AC
 * Execution Time: 249 ms
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
using mint = modint998244353;

void operator<<(ostream& os, mint a) {
  os << a.val();
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  // cnt[i][j]: iで割るとき、余りがjになる数
  vector cnt(n, vector<int>(n, 0));
  rep(i, n) rep(j, n) {
    cnt[j][a[i] % (j + 1)]++;
  }
  Debug(cnt);
  mint ans = 0;
  // xコ選ぶ
  for (int x = 1; x <= n; x++) {
    // dp[i][j][k] = i番目まで見たとき、j個選んで、余りがkになる場合の数
    vector dp(n + 1, vector(x + 1, vector<mint>(x, 0)));
    dp[0][0][0] = 1;
    rep(i, n) {
      dp[i + 1] = dp[i];
      rep(j, x) rep(k, x) {
        if (j + 1 <= x) dp[i + 1][j + 1][(k + a[i]) % x] += dp[i][j][k];
      }
    }
    Debug(dp);
    ans += dp[n][x][0];
  }
  cout << ans.val() << endl;
  return 0;
}