/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940592
 * Submitted at: 2022-04-13 12:43:28
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_m
 * Result: AC
 * Execution Time: 35 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> div(ll n) {
  vector<ll> ret(0);
  for (ll i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  return ret;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> ans = div(n);
  for (ll x : ans) cout << x << endl;
  return 0;
}