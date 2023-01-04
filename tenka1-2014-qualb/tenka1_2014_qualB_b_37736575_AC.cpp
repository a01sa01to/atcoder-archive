/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2014-qualb/submissions/37736575
 * Submitted at: 2023-01-05 00:00:14
 * Problem URL: https://atcoder.jp/contests/tenka1-2014-qualb/tasks/tenka1_2014_qualB_b
 * Result: AC
 * Execution Time: 14 ms
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

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<string> t(n);
  rep(i, n) cin >> t[i];
  vector<vector<int>> canuse(s.size());
  rep(i, s.size()) {
    for (auto x : t) {
      if (i + x.size() > s.size()) continue;
      string y = s.substr(i, x.size());
      if (x == y) canuse[i].push_back(x.size());
    }
  }
  Debug(canuse);
  vector<mint> dp(s.size() + 1, 0);
  dp[0] = 1;
  rep(i, s.size()) {
    for (auto x : canuse[i]) {
      dp[i + x] += dp[i];
    }
  }
  cout << dp[s.size()].val() << endl;
  return 0;
}