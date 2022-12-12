/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo2/submissions/37238739
 * Submitted at: 2022-12-13 00:01:37
 * Problem URL: https://atcoder.jp/contests/joi2023yo2/tasks/joi2023_yo2_b
 * Result: AC
 * Execution Time: 152 ms
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
  vector<int> a(n), b(n), c(n), d(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  rep(i, n) cin >> d[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  sort(d.begin(), d.end());
  int ans = 1e9;
  rep(i, n) {
    rep(bit, 1 << 3) {
      int s = a[i], t, u, v;
      auto itb = lower_bound(b.begin(), b.end(), s);
      if ((bit & 1) && itb != b.begin()) itb--;
      t = *itb;
      auto itc = lower_bound(c.begin(), c.end(), t);
      if ((bit & 2) && itc != c.begin()) itc--;
      u = *itc;
      auto itd = lower_bound(d.begin(), d.end(), u);
      if ((bit & 4) && itd != d.begin()) itd--;
      v = *itd;
      ans = min(ans, max({ s, t, u, v }) - min({ s, t, u, v }));
    }
  }
  cout << ans << endl;
  return 0;
}