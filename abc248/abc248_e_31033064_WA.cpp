/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31033064
 * Submitted at: 2022-04-16 22:00:59
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_e
 * Result: WA
 * Execution Time: 66 ms
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
typedef modint1000000007 mint;

int main() {
  int n, k;
  cin >> n >> k;
  if (k == 1) {
    cout << "Infinity" << endl;
    return 0;
  }
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;

  set<tuple<int, int, int>> s;

  rep(i, n) {
    map<tuple<int, int, int>, int> cnt;
    rep(j, n) {
      if (i == j) continue;
      ll dx = (v[i].first - v[j].first);
      ll dy = (v[i].second - v[j].second);
      ll g = gcd(abs(dx), abs(dy));
      dx /= g;
      dy /= g;

      if (dx < 0) dx = -dx, dy = -dy;

      if (dx == 0) {
        cnt[{ dx, abs(dy), -1 }]++;
      }
      else {
        auto [x, y] = v[i];
        mint seppen = mint(y) - mint(x) * mint(dy) / mint(dx);
        cnt[{ dx, dy, seppen.val() }]++;
      }
    }
    Debug(cnt);
    for (auto [t, c] : cnt) {
      auto [dx, dy, spn] = t;
      if (c >= k - 1) {
        s.insert({ dx, dy, spn });
      }
    }
  }
  Debug(s);
  cout << s.size() << endl;
  return 0;
}