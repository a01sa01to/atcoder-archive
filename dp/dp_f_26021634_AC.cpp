/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/26021634
 * Submitted at: 2021-09-21 10:26:01
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_f
 * Result: AC
 * Execution Time: 76 ms
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

  // dp[i][j] = sをi文字目まで、tをj文字目まで見た時の最長文字列の長さ
  ll2d dp(s.size() + 1, ll1d(t.size() + 1, 0));
  rep(i, s.size()) rep(j, t.size()) {
    // 同じなら使う
    if (s[i] == t[j]) {
      dp[i + 1][j + 1] = dp[i][j] + 1;
    }
    // 違うならmaxをとる
    else {
      dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
    }
  }
  // 復元する
  string ans = "";
  ll remLen = dp[s.size()][t.size()];
  ll i = s.size() - 1, j = t.size() - 1;
  while (remLen > 0) {
    if (s[i] == t[j]) {
      ans += s[i];
      i--;
      j--;
      remLen--;
    }
    else if (dp[i + 1][j + 1] == dp[i + 1][j]) {
      j--;
    }
    else {
      i--;
    }
  }
  reverse(all(ans));
  cout << ans << endl;
  return 0;
}