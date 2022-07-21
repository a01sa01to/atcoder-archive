/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2013-quala/submissions/33392802
 * Submitted at: 2022-07-21 18:23:02
 * Problem URL: https://atcoder.jp/contests/tenka1-2013-quala/tasks/tenka1_2013_qualA_a
 * Result: WA
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
  ll now = 42;
  while (now <= 1'300'000'000) {
    now *= 2;
  }
  cout << now << endl;
  return 0;
}