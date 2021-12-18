/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/27966783
 * Submitted at: 2021-12-18 18:31:26
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_d
 * Result: AC
 * Execution Time: 14 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

vector<ll> primeDiv(ll x) {
  vector<ll> ret;
  for (ll i = 2; i * i <= x; ++i) {
    if (x % i == 0) {
      ret.push_back(i);
      while (x % i == 0) x /= i;
    }
  }
  ret.push_back(1);
  if (x != 1) ret.push_back(x);
  return ret;
}

int main() {
  ll a, b;
  cin >> a >> b;
  cout << primeDiv(gcd(a, b)).size() << endl;
  return 0;
}