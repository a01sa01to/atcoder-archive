/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc176/submissions/36123541
 * Submitted at: 2022-11-01 00:00:17
 * Problem URL: https://atcoder.jp/contests/abc176/tasks/abc176_e
 * Result: AC
 * Execution Time: 298 ms
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
  int h, w, m;
  cin >> h >> w >> m;
  set<pair<int, int>> cnt;
  vector<int> r(h, 0), c(w, 0);
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    --x, --y;
    cnt.insert({ x, y });
    ++r[x], ++c[y];
  }

  vector<int> rcand, ccand;
  int maxr = *max_element(r.begin(), r.end());
  int maxc = *max_element(c.begin(), c.end());
  rep(i, h) if (r[i] == maxr) rcand.push_back(i);
  rep(i, w) if (c[i] == maxc) ccand.push_back(i);

  int ans = maxr + maxc - 1;
  for (auto x : rcand) {
    for (auto y : ccand) {
      if (cnt.count({ x, y })) continue;
      cout << ans + 1 << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}