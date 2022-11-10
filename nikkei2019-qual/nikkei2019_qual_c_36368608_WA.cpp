/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nikkei2019-qual/submissions/36368608
 * Submitted at: 2022-11-11 00:00:05
 * Problem URL: https://atcoder.jp/contests/nikkei2019-qual/tasks/nikkei2019_qual_c
 * Result: WA
 * Execution Time: 123 ms
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
  rep(i, n) cin >> v[i].first >> v[i].second;
  vector<pair<int, int>> w = v;
  sort(v.begin(), v.end(), [](auto& a, auto& b) {
    if (a.first == b.first) return a.second > b.second;
    return a.first > b.first;
  });
  sort(w.begin(), w.end(), [](auto& a, auto& b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second > b.second;
  });
  multiset<pair<int, int>> s(v.begin(), v.end());
  ll ans = 0;
  int i = 0, j = 0;
  rep(cnt, n) {
    if (cnt % 2 == 0) {
      // takahashi
      auto it = s.find(v[i]);
      while (it == s.end()) it = s.find(v[++i]);
      ans += v[i].first;
      s.erase(it);
    }
    else {
      // aoki
      auto it = s.find(w[j]);
      while (it == s.end()) it = s.find(w[++j]);
      ans -= w[j].second;
      s.erase(it);
    }
  }
  cout << ans << endl;
  return 0;
}