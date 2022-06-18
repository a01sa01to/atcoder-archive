/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32563974
 * Submitted at: 2022-06-18 22:07:53
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_f
 * Result: TLE
 * Execution Time: 2205 ms
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
typedef modint998244353 mint;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  while (q--) {
    int t;
    cin >> t;
    int x;
    cin >> x;
    --x;
    if (t == 1) {
      int v;
      cin >> v;
      a[x] = v;
    }
    else {
      mint ans = 0;
      rep(i, x + 1) {
        ans += mint(a[i]) * (x - i + 1) * (x - i + 2) / 2;
      }
      cout << ans.val() << endl;
    }
  }
  return 0;
}