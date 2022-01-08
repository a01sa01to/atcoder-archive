/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/28379288
 * Submitted at: 2022-01-08 21:01:22
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_a
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int f(int x) {
  return x * x + 2 * x + 3;
}

int main() {
  int t;
  cin >> t;
  cout << f(f(f(t) + t) + f(f(t))) << endl;
  return 0;
}