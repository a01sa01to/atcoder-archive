/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc149/submissions/25282296
 * Submitted at: 2021-08-22 23:50:53
 * Problem URL: https://atcoder.jp/contests/abc149/tasks/abc149_c
 * Result: AC
 * Execution Time: 2 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n) {
  if (n == 1) return false;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  ll x;
  cin >> x;
  while (true) {
    if (isPrime(x)) {
      cout << x << endl;
      return 0;
    }
    x++;
  }
}