/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc145/submissions/33626249
 * Submitted at: 2022-07-30 21:57:23
 * Problem URL: https://atcoder.jp/contests/arc145/tasks/arc145_b
 * Result: WA
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = 0;
  if (b >= a) {
    ans = n - a + 1;
  }
  else {
    ans = n / a * b;
  }
  cout << ans << endl;
  return 0;
}