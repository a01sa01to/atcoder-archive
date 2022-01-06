/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/bcu30-2018/submissions/28345105
 * Submitted at: 2022-01-06 11:39:36
 * Problem URL: https://atcoder.jp/contests/bcu30-2018/tasks/bcu30_2018_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, t;
  ll a = 1, b = 1;
  cin >> n;
  rep(i, n) {
    cin >> t;
    a *= t;
  }
  cin >> m;
  rep(i, m) {
    cin >> t;
    b *= t;
  }
  puts(a == b ? "Yes" : "No");
  return 0;
}