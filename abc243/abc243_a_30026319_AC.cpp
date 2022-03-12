/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/30026319
 * Submitted at: 2022-03-12 21:01:53
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_a
 * Result: AC
 * Execution Time: 5 ms
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
  int v, a, b, c;
  cin >> v >> a >> b >> c;
  while (true) {
    if (v < a) {
      cout << "F" << endl;
      break;
    }
    v -= a;
    if (v < b) {
      cout << "M" << endl;
      break;
    }
    v -= b;
    if (v < c) {
      cout << "T" << endl;
      break;
    }
    v -= c;
  }
  return 0;
}