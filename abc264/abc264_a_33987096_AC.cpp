/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/33987096
 * Submitted at: 2022-08-13 21:02:18
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_a
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
  int l, r;
  cin >> l >> r;
  cout << ((string) "atcoder").substr(l-1, r-l+1) << endl;
  return 0;
}