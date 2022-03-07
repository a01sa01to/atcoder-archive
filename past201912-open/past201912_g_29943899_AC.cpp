/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/29943899
 * Submitted at: 2022-03-08 00:26:38
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_g
 * Result: AC
 * Execution Time: 50 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<vector<ll>> a(n);
  rep(i, n) {
    for (int j = i + 1; j < n; ++j) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }
  vector ans(1 << n, vector<ll>(1 << n, -1e18));
  rep(s, 1 << n) rep(t, 1 << n) {
    bool skip = false;
    rep(i, n) if ((s & (1 << i)) && (t & (1 << i))) skip = true;
    if (skip) continue;

    int u = 0;
    rep(i, n) if (!(s & (1 << i)) && !(t & 1 << i)) u |= (1 << i);

    ll sum = 0;
    rep(i, n) rep(j, n) {
      if (i >= j) continue;
      if ((s & (1 << i)) && (s & (1 << j))) sum += a[i][j - i - 1];
      if ((t & (1 << i)) && (t & (1 << j))) sum += a[i][j - i - 1];
      if ((u & (1 << i)) && (u & (1 << j))) sum += a[i][j - i - 1];
    }

    ans[s][t] = sum;
  }
  ll ansd = -1e18;
  rep(i, 1 << n) rep(j, 1 << n) ansd = max(ansd, ans[i][j]);
  cout << ansd << endl;
  return 0;
}