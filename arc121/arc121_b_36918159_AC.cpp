/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc121/submissions/36918159
 * Submitted at: 2022-12-02 01:14:48
 * Problem URL: https://atcoder.jp/contests/arc121/tasks/arc121_b
 * Result: AC
 * Execution Time: 119 ms
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
  array<vector<ll>, 3> v;
  rep(i, 2 * n) {
    ll a;
    char c;
    cin >> a >> c;
    if (c == 'R') v[0].push_back(a);
    if (c == 'G') v[1].push_back(a);
    if (c == 'B') v[2].push_back(a);
  }
  bool chk = true;
  rep(i, 3) chk &= (v[i].size() % 2 == 0);
  if (chk) {
    cout << 0 << endl;
    return 0;
  }
  rep(i, 3) sort(v[i].begin(), v[i].end());
  constexpr ll INF = 1e18;
  array<ll, 3> ans = { INF, INF, INF };
  int idx = 0;
  int id = -1;
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (v[i].size() % 2 == 1 && v[j].size() % 2 == 1) id = idx;
      for (auto x : v[i]) {
        auto it = lower_bound(v[j].begin(), v[j].end(), x);
        if (it != v[j].end()) {
          ans[idx] = min(ans[idx], abs(x - *it));
        }
        if (it != v[j].begin()) {
          it--;
          ans[idx] = min(ans[idx], abs(x - *it));
        }
      }
      idx++;
    }
  }
  ll t = 0;
  rep(i, 3) if (i != id) t += ans[i];
  cout << min(ans[id], t) << endl;
  return 0;
}