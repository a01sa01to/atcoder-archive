/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32943576
 * Submitted at: 2022-07-03 01:44:44
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_g
 * Result: TLE
 * Execution Time: 3308 ms
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

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  cin >> n;
  vector a(n, vector<bool>(n));
  rep(i, n) rep(j, n) {
    char c;
    cin >> c;
    a[i][j] = (c == '1');
  }
  ll ans = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        ans += a[i][j] & a[i][k] & a[j][k];
      }
    }
  }
  cout << ans << endl;
  return 0;
}