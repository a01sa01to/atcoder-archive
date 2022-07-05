/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc152/submissions/33006090
 * Submitted at: 2022-07-06 00:01:10
 * Problem URL: https://atcoder.jp/contests/abc152/tasks/abc152_d
 * Result: AC
 * Execution Time: 37 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector dp(10, vector<ll>(10, 0));
  for (int i = 1; i <= n; i++) {
    string t = to_string(i);
    dp[t.front() - '0'][t.back() - '0']++;
  }
  ll ans = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      ans += dp[i][j] * dp[j][i];
    }
  }
  cout << ans << endl;
  return 0;
}