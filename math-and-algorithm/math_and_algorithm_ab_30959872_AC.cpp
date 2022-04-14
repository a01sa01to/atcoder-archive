/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30959872
 * Submitted at: 2022-04-14 16:19:23
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_ab
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<ll> dp(n + 1, 0);
  dp[0] = 1;
  rep(i, n) {
    if (i + 1 <= n) dp[i + 1] += dp[i];
    if (i + 2 <= n) dp[i + 2] += dp[i];
  }
  cout << dp[n] << endl;
  return 0;
}