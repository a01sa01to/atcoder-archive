/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc244/submissions/30279668
 * Submitted at: 2022-03-20 21:14:30
 * Problem URL: https://atcoder.jp/contests/abc244/tasks/abc244_d
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  char s1, s2, s3, t1, t2, t3;
  cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;
  bool flag = false;
  flag |= (s1 == t1 && s2 == t2 && s3 == t3);
  flag |= (s1 == t3 && s2 == t1 && s3 == t2);
  flag |= (s1 == t2 && s2 == t3 && s3 == t1);
  puts(flag ? "Yes" : "No");
  return 0;
}