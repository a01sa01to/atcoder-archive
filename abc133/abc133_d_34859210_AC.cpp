/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc133/submissions/34859210
 * Submitted at: 2022-09-15 00:12:51
 * Problem URL: https://atcoder.jp/contests/abc133/tasks/abc133_d
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> ans(n);
  ans[0] = accumulate(a.begin(), a.end(), 0LL);
  for (int i = 1; i < n; i += 2) ans[0] -= 2 * a[i];
  rep(i, n - 1) ans[i + 1] = 2 * a[i] - ans[i];
  rep(i, n) cout << ans[i] << " ";
  cout << endl;
  return 0;
}