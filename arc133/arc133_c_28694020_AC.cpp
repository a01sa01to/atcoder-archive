/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc133/submissions/28694020
 * Submitted at: 2022-01-22 22:22:53
 * Problem URL: https://atcoder.jp/contests/arc133/tasks/arc133_c
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll h, w, k;
  cin >> h >> w >> k;
  vector<ll> a(h), b(w);
  rep(i, h) cin >> a[i];
  rep(i, w) cin >> b[i];
  ll tate = 0, yoko = 0;
  rep(i, h) {
    tate += (((k - 1) * w % k) - a[i] + k) % k;
  }
  rep(i, w) {
    yoko += (((k - 1) * h % k) - b[i] + k) % k;
  }
  if (tate % k != yoko % k) cout << -1 << endl;
  else
    cout << (k - 1) * (h * w) - max(tate, yoko) << endl;
  return 0;
}