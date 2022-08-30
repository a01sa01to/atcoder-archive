/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34464468
 * Submitted at: 2022-08-31 00:11:40
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_d
 * Result: AC
 * Execution Time: 79 ms
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

int main() {
  int n;
  cin >> n;
  constexpr int MaxT = 1e5;
  vector dp(MaxT + 1, vector<ll>(5, -1e18));
  dp[0][0] = 0;
  vector<tuple<int, int, int>> v(n);
  rep(i, n) {
    int a, b, c;
    cin >> a >> b >> c;
    v[i] = { a, b, c };
  }
  int i = 0;
  rep(t, MaxT) {
    rep(j, 5) {
      chmax(dp[t + 1][j], dp[t][j]);
      if (j < 4) chmax(dp[t + 1][j], dp[t][j + 1]);
      if (j > 0) chmax(dp[t + 1][j], dp[t][j - 1]);
      if (i < n && get<0>(v[i]) == t+1 && get<1>(v[i]) == j) {
        dp[t + 1][j] += get<2>(v[i]);
      }
    }
    if (i < n && get<0>(v[i]) == t+1) i++;
  }
  cout << *max_element(dp[MaxT].begin(), dp[MaxT].end()) << endl;
  return 0;
}