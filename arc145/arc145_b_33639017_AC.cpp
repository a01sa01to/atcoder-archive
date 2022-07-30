/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc145/submissions/33639017
 * Submitted at: 2022-07-31 00:00:55
 * Problem URL: https://atcoder.jp/contests/arc145/tasks/arc145_b
 * Result: AC
 * Execution Time: 4 ms
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
  auto f = [&](ll x) {
    return (x / a) * min(a, b) + min(x % a, b - 1);
  };
  cout << max(f(n) - f(a - 1), 0LL) << endl;
  return 0;
}