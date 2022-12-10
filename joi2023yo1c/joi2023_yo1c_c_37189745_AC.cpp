/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1c/submissions/37189745
 * Submitted at: 2022-12-11 00:09:13
 * Problem URL: https://atcoder.jp/contests/joi2023yo1c/tasks/joi2023_yo1c_c
 * Result: AC
 * Execution Time: 5 ms
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
  rep(i, n - 1) {
    if (s[i] == s[i + 1]) s[i] = s[i + 1] = toupper(s[i]);
  }
  cout << s << endl;
  return 0;
}