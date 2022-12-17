/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37327629
 * Submitted at: 2022-12-17 21:04:57
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_c
 * Result: AC
 * Execution Time: 14 ms
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
  bool inside = false;
  rep(i, n) {
    if (s[i] == '"') inside = !inside;
    if (s[i] == ',' && !inside) s[i] = '.';
  }
  cout << s << endl;
  return 0;
}