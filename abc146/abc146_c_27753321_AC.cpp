/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc146/submissions/27753321
 * Submitted at: 2021-12-07 21:28:59
 * Problem URL: https://atcoder.jp/contests/abc146/tasks/abc146_c
 * Result: AC
 * Execution Time: 8 ms
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

int d(ll x) {
  string s = to_string(x);
  return s.size();
}

int main() {
  ll a, b, x;
  cin >> a >> b >> x;
  ll ok = 0, ng = 1e9 + 1;
  while (ng - ok > 1) {
    ll mid = (ok + ng) / 2;
    if (a * mid + b * d(mid) <= x) ok = mid;
    else
      ng = mid;
  }
  cout << ok << endl;
  return 0;
}