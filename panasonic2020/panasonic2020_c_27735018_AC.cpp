/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/27735018
 * Submitted at: 2021-12-06 16:33:11
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; ++i)

ll sqr(ll x) { return x * x; }

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  puts((4 * a * b < sqr(c - a - b) && c - a - b > 0) ? "Yes" : "No");
  return 0;
}