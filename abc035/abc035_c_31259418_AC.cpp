/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc035/submissions/31259418
 * Submitted at: 2022-04-25 15:08:22
 * Problem URL: https://atcoder.jp/contests/abc035/tasks/abc035_c
 * Result: AC
 * Execution Time: 98 ms
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
  int n, q;
  cin >> n >> q;
  vector<int> c(n + 1, 0);
  while (q--) {
    int l, r;
    cin >> l >> r;
    c[l - 1]++;
    c[r]--;
  }
  rep(i, n) c[i + 1] += c[i];
  rep(i, n) cout << c[i] % 2;
  cout << endl;
  return 0;
}