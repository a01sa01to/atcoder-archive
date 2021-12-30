/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc177/submissions/28242635
 * Submitted at: 2021-12-31 00:28:35
 * Problem URL: https://atcoder.jp/contests/abc177/tasks/abc177_e
 * Result: WA
 * Execution Time: 413 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

set<int> s;

bool prime_factorize(int n) {
  for (int i = 2; i * i <= n; ++i) {
    if (n % i != 0) continue;
    if (s.count(i)) return true;
    s.insert(i);
    while (n % i == 0) n /= i;
  }
  if (n != 1) s.insert(n);
  return false;
}

int main() {
  int n;
  cin >> n;
  bool pairwise = true;
  int setwise = -1;
  rep(i, n) {
    int a;
    cin >> a;
    if (setwise == -1) setwise = a;
    else
      setwise = gcd(setwise, a);
    if (prime_factorize(a)) pairwise = false;
  }
  if (pairwise) cout << "pairwise coprime" << endl;
  else if (setwise == 1)
    cout << "setwise coprime" << endl;
  else
    cout << "not coprime" << endl;
  return 0;
}