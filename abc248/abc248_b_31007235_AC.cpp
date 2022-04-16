/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31007235
 * Submitted at: 2022-04-16 21:03:33
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_b
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll a, b, k;
  cin >> a >> b >> k;
  ll cnt = 0;
  while (a < b) {
    a *= k;
    ++cnt;
  }
  cout << cnt << endl;
  return 0;
}