/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc128/submissions/35018368
 * Submitted at: 2022-09-21 00:00:07
 * Problem URL: https://atcoder.jp/contests/arc128/tasks/arc128_b
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

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  constexpr int INF = 1e9;
  int ans = INF;
  if (a % 3 == b % 3) ans = min(ans, max(a, b));
  if (a % 3 == c % 3) ans = min(ans, max(a, c));
  if (b % 3 == c % 3) ans = min(ans, max(b, c));
  cout << (ans == INF ? -1 : ans) << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}