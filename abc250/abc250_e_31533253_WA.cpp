/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31533253
 * Submitted at: 2022-05-08 21:43:49
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_e
 * Result: WA
 * Execution Time: 656 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  map<int, int> mp;
  rep(i, n) {
    if (mp.count(b[i]) == 0) mp[b[i]] = i;
  }
  // dp[i] : i番目まで見たとき、それをそろえるための最小index
  vector<int> dp(n + 1, 1e9);
  dp[0] = 0;
  rep(i, n) {
    if (mp.count(a[i])) dp[i + 1] = max(dp[i], mp[a[i]]);
  }
  Debug(dp);
  int q;
  cin >> q;
  while (q--) {
    int x, y;
    cin >> x >> y;
    Debug(dp[x], x, y);
    if (dp[x] <= y - 1)
      puts("Yes");
    else
      puts("No");
  }
  return 0;
}