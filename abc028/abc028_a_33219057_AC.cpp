/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/33219057
 * Submitted at: 2022-07-14 18:31:58
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_a
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
  int x;
  cin >> x;
  if (x < 60) cout << "Bad" << endl;
  else if (x < 90)
    cout << "Good" << endl;
  else if (x < 100)
    cout << "Great" << endl;
  else
    cout << "Perfect" << endl;

  return 0;
}