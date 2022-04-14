/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30955909
 * Submitted at: 2022-04-14 11:46:54
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/dp_a
 * Result: AC
 * Execution Time: 30 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  vector<int> dp(n, 1e9);
  dp[0] = 0;
  rep(i, n) {
    if (i + 1 < n) dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
    if (i + 2 < n) dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
  }
  cout << dp[n - 1] << endl;
  return 0;
}