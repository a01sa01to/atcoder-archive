/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc100/submissions/34671402
 * Submitted at: 2022-09-07 18:17:22
 * Problem URL: https://atcoder.jp/contests/abc100/tasks/abc100_c
 * Result: AC
 * Execution Time: 12 ms
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
  ll ans = 0;
  rep(i, n) {
    while (a[i] % 2 == 0) {
      a[i] /= 2;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}