/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc121/submissions/36917975
 * Submitted at: 2022-12-02 00:56:18
 * Problem URL: https://atcoder.jp/contests/arc121/tasks/arc121_b
 * Result: WA
 * Execution Time: 120 ms
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
  vector<ll> cand(0);
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (v[i].size() % 2 == 1 && v[j].size() % 2 == 1) {
        for (auto x : v[i]) {
          auto it = lower_bound(v[j].begin(), v[j].end(), x);
          cand.push_back(abs(x - *it));
          if (it != v[j].begin()) {
            it--;
            cand.push_back(abs(x - *it));
          }
        }
      }
    }
  }
  sort(cand.begin(), cand.end());
  cout << cand[0] + cand[1] << endl;
  return 0;
}