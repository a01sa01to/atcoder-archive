/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dwango2015-prelims/submissions/34695262
 * Submitted at: 2022-09-09 00:01:41
 * Problem URL: https://atcoder.jp/contests/dwango2015-prelims/tasks/dwango2015_prelims_1
 * Result: AC
 * Execution Time: 7 ms
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
  int n, x;
  cin >> n >> x;
  cout << n * 525 + x * 15 << endl;
  return 0;
}