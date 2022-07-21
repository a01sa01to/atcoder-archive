/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc018/submissions/33393673
 * Submitted at: 2022-07-21 19:17:06
 * Problem URL: https://atcoder.jp/contests/arc018/tasks/arc018_2
 * Result: AC
 * Execution Time: 12 ms
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
  vector<pair<ll, ll>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  int ans = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        auto [x1, y1] = v[i];
        auto [x2, y2] = v[j];
        auto [x3, y3] = v[k];
        x2 -= x1, x3 -= x1, y2 -= y1, y3 -= y1;
        ll t = x2 * y3 - y2 * x3;
        if (t != 0 && t % 2 == 0) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}