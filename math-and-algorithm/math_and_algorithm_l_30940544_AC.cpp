/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940544
 * Submitted at: 2022-04-13 12:40:23
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_l
 * Result: AC
 * Execution Time: 29 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n) {
  if (n <= 1) return false;
  for (ll i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  ll n;
  cin >> n;
  puts(isPrime(n) ? "Yes" : "No");
  return 0;
}