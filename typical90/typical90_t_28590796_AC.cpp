/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28590796
 * Submitted at: 2022-01-17 00:03:04
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_t
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

ll poww(ll b, ll c) {
  ll ans = 1;
  rep(i, b) ans *= c;
  return ans;
}

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  puts(a < poww(b, c) ? "Yes" : "No");
  return 0;
}