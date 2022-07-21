/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2012-qualB/submissions/33392919
 * Submitted at: 2022-07-21 18:31:31
 * Problem URL: https://atcoder.jp/contests/tenka1-2012-qualB/tasks/tenka1_2012_5
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
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i < 128; i++) {
    if (i % 3 == a && i % 5 == b && i % 7 == c) {
      cout << i << endl;
    }
  }
  return 0;
}