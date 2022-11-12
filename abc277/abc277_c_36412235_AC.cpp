/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36412235
 * Submitted at: 2022-11-12 21:05:44
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_c
 * Result: AC
 * Execution Time: 589 ms
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
  vector<pair<int, int>> v(n);
  set<int> comp;
  comp.insert(1);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v[i] = { a, b };
    comp.insert(a);
    comp.insert(b);
  }
  map<int, int> mp, mpinv;
  int cnt = 0;
  for (auto x : comp) {
    mp[x] = cnt;
    mpinv[cnt] = x;
    cnt++;
  }
  dsu d(cnt);
  rep(i, n) {
    d.merge(mp[v[i].first], mp[v[i].second]);
  }
  int ans = 0;
  rep(i, cnt) {
    if (d.same(0, i)) ans = max(ans, mpinv[i]);
  }
  cout << ans << endl;
  return 0;
}