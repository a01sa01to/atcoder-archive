/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954576
 * Submitted at: 2022-04-14 09:34:05
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_n
 * Result: AC
 * Execution Time: 19 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> factorize(ll n) {
  vector<ll> ret(0);
  for (ll i = 2; i * i <= n; ++i) {
    if (n % i) continue;
    while (n % i == 0) {
      ret.push_back(i);
      n /= i;
    }
  }
  if (n != 1) ret.push_back(n);
  return ret;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> fact = factorize(n);
  for (ll x : fact) cout << x << " ";
  cout << endl;
  return 0;
}