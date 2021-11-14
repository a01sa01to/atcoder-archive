/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc227/submissions/27246893
 * Submitted at: 2021-11-14 09:46:09
 * Problem URL: https://atcoder.jp/contests/abc227/tasks/abc227_g
 * Result: TLE
 * Execution Time: 2206 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()
typedef modint998244353 mint;

map<ll, ll> prime_factor;
set<ll> prime_set;
void prime_factorize(ll n, bool flag) {
  for (ll i = 2; i * i <= n; i++) {
    if (n % i != 0) continue;
    ll ex = 0;
    while (n % i == 0) {
      ex++;
      n /= i;
    }
    if (flag) prime_factor[i] += ex;
    else
      prime_factor[i] -= ex;
    prime_set.insert(i);
  }
  if (n != 1) {
    if (flag) prime_factor[n]++;
    else
      prime_factor[n]--;
    prime_set.insert(n);
  }
}

int main() {
  cout << fixed << setprecision(15);
  ll n, k;
  cin >> n >> k;
  for (ll i = 0; i < k; i++) prime_factorize(n - i, true);
  for (ll i = 1; i <= k; i++) prime_factorize(i, false);
  mint ans = 1;
  for (auto p : prime_set) {
    ans *= mint(prime_factor[p] + 1);
  }
  cout << ans.val() << endl;
  return 0;
}