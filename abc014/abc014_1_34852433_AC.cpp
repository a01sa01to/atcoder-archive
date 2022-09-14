/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc014/submissions/34852433
 * Submitted at: 2022-09-14 18:11:56
 * Problem URL: https://atcoder.jp/contests/abc014/tasks/abc014_1
 * Result: AC
 * Execution Time: 15 ms
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
  int a, b;
  cin >> a >> b;
  cout << (b - a % b) % b << endl;
  return 0;
}