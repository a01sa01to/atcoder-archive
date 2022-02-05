/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29063153
 * Submitted at: 2022-02-05 21:01:56
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_a
 * Result: WA
 * Execution Time: 6 ms
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
  int n;
  cin >> n;
  puts(n > 4 ? "Yes" : "No");
  return 0;
}