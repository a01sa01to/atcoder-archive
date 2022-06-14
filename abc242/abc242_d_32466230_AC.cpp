/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/32466230
 * Submitted at: 2022-06-14 14:39:59
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_d
 * Result: AC
 * Execution Time: 284 ms
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

string s;

char solve(ll t, ll k) {
  if (k == 0) return (s[0] - 'A' + t) % 3 + 'A';
  if (t == 0) return s[k];
  return (solve(t - 1, k / 2) - 'A' + (k & 1) + 1) % 3 + 'A';
}

int main() {
  cin >> s;
  int q;
  cin >> q;
  while (q--) {
    ll t, k;
    cin >> t >> k;
    cout << solve(t, --k) << endl;
  }
  return 0;
}