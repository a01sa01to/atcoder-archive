/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc195/submissions/35202784
 * Submitted at: 2022-09-28 00:15:23
 * Problem URL: https://atcoder.jp/contests/abc195/tasks/abc195_d
 * Result: AC
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

int n, m, q;
vector<pair<int, int>> v;
vector<pair<int, int>> x;
void solve() {
  int l, r;
  cin >> l >> r;
  --l, --r;
  int ans = 0;
  ll used = 0;
  rep(i, n) {
    auto [we, va] = v[i];
    auto it = lower_bound(x.begin(), x.end(), make_pair(we, -1));
    while (it != x.end() && ((l <= it->second && it->second <= r) || ((1LL << it->second) & used))) it++;
    if (it != x.end()) {
      ans += va;
      used |= (1LL << it->second);
    }
  }
  cout << ans << endl;
}

int main() {
  cin >> n >> m >> q;
  v.resize(n);
  x.resize(m);
  rep(i, n) cin >> v[i].first >> v[i].second;
  rep(i, m) {
    cin >> x[i].first;
    x[i].second = i;
  }
  sort(v.begin(), v.end(), [](auto a, auto b) {
    return a.second > b.second;
  });
  sort(x.begin(), x.end());
  while (q--) {
    solve();
  }
  return 0;
}