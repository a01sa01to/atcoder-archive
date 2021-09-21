/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/26021531
 * Submitted at: 2021-09-21 10:10:48
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_f
 * Result: TLE
 * Execution Time: 2440 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s, t;
  cin >> s >> t;

  // dp[i][j] = sをi文字目まで、tをj文字目まで見た時の最長文字列
  vector<vector<string>> dp(s.size() + 1, vector<string>(t.size() + 1, ""));
  rep(i, s.size()) rep(j, t.size()) {
    // 同じなら使う
    if (s[i] == t[j]) {
      dp[i + 1][j + 1] = dp[i][j] + s[i];
    }
    // 違うならmaxをとる
    else {
      if (dp[i][j + 1].size() > dp[i + 1][j].size()) {
        dp[i + 1][j + 1] = dp[i][j + 1];
      }
      else {
        dp[i + 1][j + 1] = dp[i + 1][j];
      }
    }
  }
  cout << dp[s.size()][t.size()] << endl;
  return 0;
}