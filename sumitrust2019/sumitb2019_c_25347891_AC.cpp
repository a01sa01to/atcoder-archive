/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/25347891
 * Submitted at: 2021-08-26 19:59:35
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int x;
  cin >> x;
  // dp[i]: i円を作れるか
  vector<bool> dp(1e5 + 1, false);
  dp[0] = true;
  rep(i, 1e5 + 1) rep(j, 6) {
    if (i >= 100 + j)
      if (dp[i - 100 - j]) dp[i] = true;
  }
  cout << dp[x] << endl;
  return 0;
}