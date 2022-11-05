/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36228374
 * Submitted at: 2022-11-05 21:05:55
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_d
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector b(n, array<int, 3>());
  rep(i, n) {
    int t = a[i];
    while (t % 2 == 0) b[i][0]++, t /= 2;
    while (t % 3 == 0) b[i][1]++, t /= 3;
    b[i][2] = t;
  }
  int x = b[0][2];
  rep(i, n) {
    if (x != b[i][2]) {
      cout << -1 << endl;
      return 0;
    }
  }
  int minim2 = 1e9, minim3 = 1e9;
  rep(i, n) {
    minim2 = min(minim2, b[i][0]);
    minim3 = min(minim3, b[i][1]);
  }
  ll ans = 0;
  rep(i, n) {
    ans += b[i][0] - minim2;
    ans += b[i][1] - minim3;
  }
  cout << ans << endl;
  return 0;
}