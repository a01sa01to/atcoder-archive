/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/caddi2018/submissions/27779358
 * Submitted at: 2021-12-09 18:27:49
 * Problem URL: https://atcoder.jp/contests/caddi2018/tasks/caddi2018_a
 * Result: WA
 * Execution Time: 10 ms
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

vector<P> primeFactorize(ll n) {
  vector<P> res;
  for (ll i = 2; i * i <= n; ++i) {
    if (n % i != 0) continue;
    ll ex = 0;
    while (n % i == 0) {
      ++ex;
      n /= i;
    }
    res.push_back(P(i, ex));
  }
  if (n != 1) res.push_back(P(n, 1));
  return res;
}

int main() {
  ll n, p;
  cin >> n >> p;
  vector<P> v = primeFactorize(p);
  ll ans = 1;
  rep(i, v.size()) {
    // cout << "[DEB] " << v[i].first << " " << v[i].second << endl;
    if (v[i].second >= n) {
      ans *= v[i].first;
      v[i].second -= p;
      --i;
    }
  }
  cout << ans << endl;
  return 0;
}