/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc132/submissions/36706868
 * Submitted at: 2022-11-22 00:48:25
 * Problem URL: https://atcoder.jp/contests/abc132/tasks/abc132_d
 * Result: RE
 * Execution Time: 108 ms
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

using mint = modint1000000007;

int main() {
  int n, k;
  cin >> n >> k;
  vector<mint> fact(n + 1, 1);
  rep(i, n) fact[i + 1] = fact[i] * (i + 1);
  for (int i = 1; i <= k; i++) {
    // ans = Comb(n-k+1, i) * Comb(k-1, i-1);
    mint ans = (n - k + 1 - i >= 0);
    ans *= fact[n - k + 1] / fact[i] / fact[n - k + 1 - i];
    ans *= fact[k - 1] / fact[i - 1] / fact[k - i];
    cout << ans.val() << endl;
  }
  return 0;
}