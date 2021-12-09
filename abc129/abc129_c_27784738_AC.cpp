/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc129/submissions/27784738
 * Submitted at: 2021-12-10 00:30:35
 * Problem URL: https://atcoder.jp/contests/abc129/tasks/abc129_c
 * Result: AC
 * Execution Time: 66 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef modint1000000007 mint;

int main() {
  int n, m;
  cin >> n >> m;
  set<int> st;
  rep(i, m) {
    int x;
    cin >> x;
    st.insert(x);
  }

  // dp[i] = i番目までの通り数
  vector<mint> dp(n + 1, 0);

  dp[0] = 1;
  rep(i, n) {
    if (i + 1 <= n && !st.count(i + 1)) dp[i + 1] += dp[i];
    if (i + 2 <= n && !st.count(i + 2)) dp[i + 2] += dp[i];
    // cout << "[DEB] " << i << " " << dp[i].val() << endl;
  }

  cout << dp[n].val() << endl;
  return 0;
}