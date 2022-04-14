/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30960472
 * Submitted at: 2022-04-14 16:48:44
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_ac
 * Result: WA
 * Execution Time: 139 ms
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

  vector<ll> dp(n + 1, 0);
  rep(i, n) {
    dp[min(i + 2, n)] = max(dp[min(i + 2, n)], dp[i] + a[i]);
  }
  cout << dp[n] << endl;
  return 0;
}