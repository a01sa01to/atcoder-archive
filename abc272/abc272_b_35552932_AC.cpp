/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35552932
 * Submitted at: 2022-10-10 00:11:12
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_b
 * Result: AC
 * Execution Time: 9 ms
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
  vector Grid(n, vector<bool>(n, false));
  rep(i, n) Grid[i][i] = true;
  rep(i, m) {
    int k;
    cin >> k;
    vector<int> a(k);
    rep(j, k) {
      cin >> a[j];
      a[j]--;
    }
    rep(j, k) rep(l, k) Grid[a[j]][a[l]] = true;
  }

  bool ans = true;
  rep(i, n) rep(j, n) ans &= Grid[i][j];
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}