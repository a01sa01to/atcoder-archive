/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc210/submissions/24412560
 * Submitted at: 2021-07-20 23:18:59
 * Problem URL: https://atcoder.jp/contests/abc210/tasks/abc210_d
 * Result: WA
 * Execution Time: 319 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll h, w, c;
  cin >> h >> w >> c;
  ll2d cost(h, ll1d(w)), dp(h + 1, ll1d(w + 1));
  loop(i, h) loop(j, w) cin >> cost[i][j];
  loop(i, h + 1) loop(j, w + 1) {
    if (!i || !j) {
      dp[i][j] = 1e15;
      continue;
    }
    dp[i][j] = min({ cost[i - 1][j - 1], dp[i - 1][j] + c, dp[i][j - 1] + c });
  }
  ll ans = 1e15;
  loop(i, h) loop(j, w) {
    ans = min({ ans, dp[i][j + 1] + c + cost[i][j], dp[i + 1][j] + c + cost[i][j] });
  }
  cout << ans << endl;
  return 0;
}