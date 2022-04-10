/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/30858970
 * Submitted at: 2022-04-10 21:14:53
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_c
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void print(int n) {
  if (n == 0) return;
  print(n - 1);
  cout << n << " ";
  print(n - 1);
}

int main() {
  int n;
  cin >> n;
  print(n);
  cout << endl;
  return 0;
}