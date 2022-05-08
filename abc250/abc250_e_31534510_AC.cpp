/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31534510
 * Submitted at: 2022-05-08 21:48:19
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_e
 * Result: AC
 * Execution Time: 866 ms
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
  map<int, int> mp1, mp2;
  rep(i, n) {
    if (mp1.count(b[i]) == 0) mp1[b[i]] = i;
    if (mp2.count(a[i]) == 0) mp2[a[i]] = i;
  }
  // dp1[i] : aをi番目まで見たとき、それをそろえるための最小index
  vector<int> dp1(n + 1, 1e9), dp2(n + 1, 1e9);
  dp1[0] = dp2[0] = 0;
  rep(i, n) {
    if (mp1.count(a[i])) dp1[i + 1] = max(dp1[i], mp1[a[i]]);
    if (mp2.count(b[i])) dp2[i + 1] = max(dp2[i], mp2[b[i]]);
  }
  int q;
  cin >> q;
  while (q--) {
    int x, y;
    cin >> x >> y;
    if (dp1[x] <= y - 1 && dp2[y] <= x - 1)
      puts("Yes");
    else
      puts("No");
  }
  return 0;
}