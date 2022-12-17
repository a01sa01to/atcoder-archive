/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37322441
 * Submitted at: 2022-12-17 21:01:15
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_a
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
  int k;
  cin >> k;
  vector<int> a(k);
  iota(a.begin(), a.end(), 0);
  rep(i, k) cout << char(a[i] + 'A');
  cout << endl;
  return 0;
}