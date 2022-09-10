/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc206/submissions/34764935
 * Submitted at: 2022-09-11 00:17:05
 * Problem URL: https://atcoder.jp/contests/abc206/tasks/abc206_d
 * Result: AC
 * Execution Time: 71 ms
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
  int t = *max_element(a.begin(), a.end()) + 1;
  dsu d(t);
  rep(i, n) d.merge(a[i], a[n - i - 1]);
  cout << t - d.groups().size() << endl;
  return 0;
}