/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ttpc2022/submissions/36291926
 * Submitted at: 2022-11-07 00:10:26
 * Problem URL: https://atcoder.jp/contests/ttpc2022/tasks/ttpc2022_b
 * Result: WA
 * Execution Time: 587 ms
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

template<typename T>
inline void chmax(T &a, T b) { a = max(a, b); }

inline vector<int> enumerate(int n) {
  string s = to_string(n);
  vector<int> res;
  do {
    res.push_back(stoi(s));
  } while (next_permutation(s.begin(), s.end()));
  return res;
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector dp(n + 1, vector<int>(1e4, -1e9));
  {
    auto v = enumerate(x);
    for (int e : v) dp[0][e] = 0;
  }
  rep(i, n) {
    rep(j, 1e4) {
      // 使わない
      {
        auto v = enumerate(j);
        for (int e : v) chmax(dp[i + 1][e], dp[i][j]);
      }
      // 使う
      if (j - a[i] >= 0) {
        auto v = enumerate(j - a[i]);
        for (int e : v) chmax(dp[i + 1][e], dp[i][j] + 1);
      }
    }
  }
  int ans = 0;
  rep(i, 1e4) chmax(ans, dp[n][i]);
  cout << ans << endl;
  return 0;
}