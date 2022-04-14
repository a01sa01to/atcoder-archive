/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30960640
 * Submitted at: 2022-04-14 16:55:36
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_ac
 * Result: AC
 * Execution Time: 143 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<pair<ll, ll>> dp(n + 1, { 0, 0 });
  rep(i, n) {
    // first = その日に勉強した
    // second = してない
    auto [px, py] = dp[i];
    auto [nx, ny] = dp[i + 1];
    dp[i + 1] = { max(nx, py + a[i]), max({ px, py, ny }) };
  }
  cout << max(dp[n].first, dp[n].second) << endl;
  return 0;
}