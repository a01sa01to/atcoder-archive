/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/26022169
 * Submitted at: 2021-09-21 11:28:37
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_h
 * Result: AC
 * Execution Time: 36 ms
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

typedef modint1000000007 mint;

int main() {
  cout << fixed << setprecision(15);
  int h, w;
  cin >> h >> w;
  vector<vector<bool>> Grid(h, vector<bool>(w));
  rep(i, h) {
    string s;
    cin >> s;
    rep(j, w) {
      Grid[i][j] = (s[j] == '#');
    }
  }

  // dp[i][j] = マス(1,1)からマス(i,j)までの経路
  vector<vector<mint>> dp(h, vector<mint>(w, 0));
  dp[0][0] = 1;
  rep(i, h) rep(j, w) {
    if (!(i || j)) continue;
    if (Grid[i][j]) dp[i][j] = 0;
    else if (i == 0)
      dp[i][j] = dp[i][j - 1];
    else if (j == 0)
      dp[i][j] = dp[i - 1][j];
    else
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
  }
  cout << dp[h - 1][w - 1].val() << endl;
  return 0;
}