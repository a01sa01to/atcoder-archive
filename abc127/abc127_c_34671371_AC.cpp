/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc127/submissions/34671371
 * Submitted at: 2022-09-07 18:15:08
 * Problem URL: https://atcoder.jp/contests/abc127/tasks/abc127_c
 * Result: AC
 * Execution Time: 48 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> imos(n + 1, 0);
  rep(i, m) {
    int l, r;
    cin >> l >> r;
    l--;
    imos[l]++;
    imos[r]--;
  }
  rep(i, n) imos[i + 1] += imos[i];
  int ans = 0;
  rep(i, n) ans += (imos[i] == m);
  cout << ans << endl;
  return 0;
}