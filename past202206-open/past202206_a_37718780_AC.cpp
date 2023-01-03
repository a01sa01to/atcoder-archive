/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202206-open/submissions/37718780
 * Submitted at: 2023-01-04 00:03:50
 * Problem URL: https://atcoder.jp/contests/past202206-open/tasks/past202206_a
 * Result: AC
 * Execution Time: 20 ms
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
  int x, a, b, c;
  cin >> x >> a >> b >> c;
  int rab = b * x + a * b * c;
  int tor = a * x;
  if (rab > tor) {
    cout << "Tortoise" << endl;
  }
  else if (rab < tor) {
    cout << "Hare" << endl;
  }
  else {
    cout << "Tie" << endl;
  }
  return 0;
}