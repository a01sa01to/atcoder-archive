/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31208305
 * Submitted at: 2022-04-23 22:34:53
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_e
 * Result: WA
 * Execution Time: 8 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, p;
  cin >> n >> p;
  modint::set_mod(p);

  vector<modint> fact(3001, 1);
  for (int i = 2; i <= 3000; ++i) {
    fact[i] = fact[i - 1] * i;
  }

  modint ans = 0;
  int div = (n - 1) / 2;
  Debug(div);
  Debug(ans.mod());
  for (int k = 1; k <= div; ++k) {
    ans += 26 * modint(25).pow(k - 1) * fact[n - 1] / fact[k - 1] / fact[n - k];
  }
  cout << ans.val() << endl;
  return 0;
}