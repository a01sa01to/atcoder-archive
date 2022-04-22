/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202109-open/submissions/31148869
 * Submitted at: 2022-04-22 15:36:32
 * Problem URL: https://atcoder.jp/contests/past202109-open/tasks/past202109_e
 * Result: AC
 * Execution Time: 101 ms
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

int main() {
  int n, k;
  cin >> n >> k;
  map<int, int> mp;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first;
  rep(i, n) cin >> v[i].second;
  rep(i, n) {
    if (!mp.count(v[i].first)) {
      mp[v[i].first] = v[i].second;
    }
    else {
      mp[v[i].first] = min(mp[v[i].first], v[i].second);
    }
  }
  if (mp.size() < k) {
    cout << -1 << endl;
  }
  else {
    vector<int> ansvec;
    for (auto& [key, val] : mp) {
      ansvec.push_back(val);
    }
    sort(ansvec.begin(), ansvec.end());
    ll ans = 0;
    rep(i, k) ans += ansvec[i];
    cout << ans << endl;
  }
  return 0;
}