/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202107-open/submissions/30487649
 * Submitted at: 2022-03-27 00:13:31
 * Problem URL: https://atcoder.jp/contests/past202107-open/tasks/past202107_b
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
  int a, b, c;
  cin >> a >> b >> c;
  while (a > b * c) --a;
  cout << fixed << setprecision(15) << double(a) / b << endl;
  return 0;
}