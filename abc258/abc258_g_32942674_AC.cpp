/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32942674
 * Submitted at: 2022-07-03 01:06:28
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_g
 * Result: AC
 * Execution Time: 1050 ms
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
  vector<bitset<3001>> a(n);
  rep(i, n) rep(j, n) {
    char c;
    cin >> c;
    a[i][j] = (c == '1');
  }
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i][j]) {
        ans += (a[i] & a[j]).count();
      }
    }
  }
  cout << ans / 3 << endl;
  return 0;
}