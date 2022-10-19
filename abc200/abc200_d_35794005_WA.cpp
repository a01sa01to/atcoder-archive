/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc200/submissions/35794005
 * Submitted at: 2022-10-20 00:12:07
 * Problem URL: https://atcoder.jp/contests/abc200/tasks/abc200_d
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> chk(200, -1);
  const int x = min(n, 8);
  rep(bit, (1 << x)) {
    int c = 0;
    rep(i, x) {
      if (bit & (1 << i)) {
        c += a[i];
        c %= 200;
      }
    }
    if (chk[c] != -1) {
      cout << "Yes" << endl;
      cout << endl;
      cout << __builtin_popcount(chk[c]);
      rep(i, x) {
        if (chk[c] & (1 << i)) printf(" %d", i + 1);
      }
      cout << endl;
      cout << __builtin_popcount(bit);
      rep(i, x) {
        if (bit & (1 << i)) printf(" %d", i + 1);
      }
      cout << endl;
      return 0;
    }
    chk[c] = bit;
  }
  cout << "No" << endl;
  return 0;
}