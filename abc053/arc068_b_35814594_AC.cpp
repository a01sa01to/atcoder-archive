/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc053/submissions/35814594
 * Submitted at: 2022-10-21 00:35:18
 * Problem URL: https://atcoder.jp/contests/abc053/tasks/arc068_b
 * Result: AC
 * Execution Time: 37 ms
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
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  cout << a.size() - (a.size() % 2 == 0) << endl;
  return 0;
}