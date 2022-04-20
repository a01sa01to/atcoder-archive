/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202107-open/submissions/31122750
 * Submitted at: 2022-04-21 01:28:43
 * Problem URL: https://atcoder.jp/contests/past202107-open/tasks/past202107_e
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
  ll n;
  cin >> n;
  auto f = [](int x) {
    ll ret = 1;
    for (int i = 1; i <= 30; ++i) {
      ret *= 3;
      if (x == i) ret += 1;
    }
    return ret;
  };
  for (int k = 1; k <= 30; ++k) {
    if (f(k) == n) {
      cout << k << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}