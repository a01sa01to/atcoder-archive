/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37842224
 * Submitted at: 2023-01-07 22:25:19
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_d
 * Result: AC
 * Execution Time: 66 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

constexpr int PrimeN = 3e6;
vector<bool> isPrime(PrimeN + 1, true);
void solve() {
  ll n;
  cin >> n;
  for (ll p = 2; p * p * p <= n; p++) {
    if (!isPrime[p]) continue;
    if (n % (p * p) == 0) {
      ll q = n / (p * p);
      cout << p << " " << q << endl;
      return;
    }
    if (n % p == 0) {
      ll q = n / p;
      ll ok = 1, ng = 3e9 + 1;
      while (ng - ok > 1) {
        ll mid = (ok + ng) / 2;
        (mid * mid <= q ? ok : ng) = mid;
      }
      Debug(ok, q);
      if (ok * ok == q) {
        cout << ok << " " << p << endl;
        return;
      }
    }
  }
  assert(false);
}

int main() {
  int t;
  cin >> t;
  rep(i, PrimeN + 1) {
    if (i < 2) isPrime[i] = false;
    if (isPrime[i]) {
      for (int j = i * 2; j <= PrimeN; j += i) {
        isPrime[j] = false;
      }
    }
  }
  while (t--) solve();
  return 0;
}