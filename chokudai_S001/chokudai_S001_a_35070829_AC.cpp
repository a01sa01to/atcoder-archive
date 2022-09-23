/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/35070829
 * Submitted at: 2022-09-24 00:51:59
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_a
 * Result: AC
 * Execution Time: 6 ms
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
  cout << *max_element(a.begin(), a.end()) << endl;
  return 0;
}