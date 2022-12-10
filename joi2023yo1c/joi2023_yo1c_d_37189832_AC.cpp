/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1c/submissions/37189832
 * Submitted at: 2022-12-11 00:12:01
 * Problem URL: https://atcoder.jp/contests/joi2023yo1c/tasks/joi2023_yo1c_d
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
  vector<int> tmp = a;
  sort(tmp.begin(), tmp.end());
  rep(i, n) a[i] = lower_bound(tmp.begin(), tmp.end(), a[i]) - tmp.begin();
  rep(i, n) cout << a[i] + 1 << endl;
  return 0;
}