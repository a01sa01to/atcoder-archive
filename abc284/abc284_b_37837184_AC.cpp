/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37837184
 * Submitted at: 2023-01-07 22:11:23
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_b
 * Result: AC
 * Execution Time: 10 ms
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
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    ans += a % 2;
  }
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}