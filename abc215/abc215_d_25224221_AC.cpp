/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc215/submissions/25224221
 * Submitted at: 2021-08-21 21:39:48
 * Problem URL: https://atcoder.jp/contests/abc215/tasks/abc215_d
 * Result: AC
 * Execution Time: 417 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

ll n, m;
set<ll> divisor;

void multi(ll x) {
  if (divisor.count(x)) { return; }
  ll i = 1;
  while (x * i <= m) {
    divisor.insert(x * i);
    i++;
  }
}

void prime_factorize(ll N) {
  for (ll a = 2; a * a <= N; ++a) {
    if (N % a != 0) continue;
    ll ex = 0;
    while (N % a == 0) {
      ex++;
      N /= a;
    }
    multi(a);
  }
  if (N != 1) multi(N);
}

int main() {
  cout << fixed << setprecision(15);
  cin >> n >> m;
  ll1d a(n);
  rep(i, n) {
    cin >> a[i];
    prime_factorize(a[i]);
  }
  cout << (m - divisor.size()) << endl;
  for (ll i = 1; i <= m; i++) {
    if (!divisor.count(i)) {
      cout << i << endl;
    }
  }
  return 0;
}