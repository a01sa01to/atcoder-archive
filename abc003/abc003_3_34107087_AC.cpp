/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc003/submissions/34107087
 * Submitted at: 2022-08-17 18:32:52
 * Problem URL: https://atcoder.jp/contests/abc003/tasks/abc003_3
 * Result: AC
 * Execution Time: 8 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> r(n);
  rep(i, n) cin >> r[i];
  sort(r.begin(), r.end());
  double ans = 0;
  for (int i = n - k; i < n; i++) {
    ans = (ans + r[i]) / 2;
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}