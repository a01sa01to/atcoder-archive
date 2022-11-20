/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1b/submissions/36685974
 * Submitted at: 2022-11-21 00:39:46
 * Problem URL: https://atcoder.jp/contests/joi2023yo1b/tasks/joi2023_yo1b_c
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  string t = s.substr(0, n / 2), u = s.substr(n / 2);
  cout << (t == u ? "Yes" : "No") << endl;
  return 0;
}