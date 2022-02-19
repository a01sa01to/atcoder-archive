/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29440183
 * Submitted at: 2022-02-19 21:12:40
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_d
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool is_prime(int n) {
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  set<int> primes;
  rep(i, 201) {
    if (is_prime(i)) primes.insert(i);
  }
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  for (int s = a; s <= b; ++s) {
    bool chk = false;
    for (int t = c; t <= d; ++t) {
      if (primes.count(s + t)) {
        chk = true;
        break;
      }
    }
    if (!chk) {
      cout << "Takahashi" << endl;
      return 0;
    }
  }
  cout << "Aoki" << endl;
  return 0;
}