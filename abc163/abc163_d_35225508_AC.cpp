/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc163/submissions/35225508
 * Submitted at: 2022-09-29 12:00:04
 * Problem URL: https://atcoder.jp/contests/abc163/tasks/abc163_d
 * Result: AC
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using mint = modint1000000007;

int main() {
  int n, k;
  cin >> n >> k;

  // cnt[i] = select i elem
  vector<mint> cnt(n + 2);
  rep(i, n + 2) {
    ll minim = ll(i) * (i - 1) / 2;
    ll maxim = minim + ll(n - i + 1) * i;
    cnt[i] = maxim - minim + 1;
    Debug(i, minim, maxim, cnt[i].val());
  }

  mint ans = 0;
  for (int i = k; i <= n + 1; i++) {
    ans += cnt[i];
  }
  cout << ans.val() << endl;
  return 0;
}