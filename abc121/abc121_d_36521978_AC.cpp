/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc121/submissions/36521978
 * Submitted at: 2022-11-16 00:24:40
 * Problem URL: https://atcoder.jp/contests/abc121/tasks/abc121_d
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

inline ll f(ll x) {
  //   1 2 3 4 5 6 7 8 9 10 11
  // 0 1 3 0 4 1 7 0 8 1 11  0 ...
  if (x <= 0) return 0;
  switch (x % 4) {
    case 0:
      return x;
    case 1:
      return 1;
    case 2:
      return x + 1;
    case 3:
      return 0;
  }
}

int main() {
  ll a, b;
  cin >> a >> b;
  --a;
  ll fa = f(a), fb = f(b);
  Debug(fa, fb);
  cout << (fa ^ fb) << endl;
  return 0;
}