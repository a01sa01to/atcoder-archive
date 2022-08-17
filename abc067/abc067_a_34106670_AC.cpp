/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc067/submissions/34106670
 * Submitted at: 2022-08-17 18:10:55
 * Problem URL: https://atcoder.jp/contests/abc067/tasks/abc067_a
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
  int a,b;cin>>a>>b;
  bool ans = false;
  ans |= a % 3 == 0;
  ans |= b % 3 == 0;
  ans |= (a + b) % 3 == 0;
  puts(ans ? "Possible" : "Impossible");
  return 0;
}