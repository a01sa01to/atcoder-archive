/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36649980
 * Submitted at: 2022-11-20 00:07:38
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_f
 * Result: WA
 * Execution Time: 24 ms
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
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  vector dp(1 << n, vector<bool>(26, false));
  rep(bit, 1 << n) {
    rep(i, n) {
      if (!(bit & (1 << i))) continue;
      dp[bit][s[i].back() - 'a'] = !dp[bit & ~(1 << i)][s[i].front() - 'a'];
    }
  }
  bool ok = false;
  rep(i, 26) ok |= dp[(1 << n) - 1][i];
  cout << (ok ? "First" : "Second") << endl;
  return 0;
}