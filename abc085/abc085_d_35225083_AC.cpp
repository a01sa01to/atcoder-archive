/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc085/submissions/35225083
 * Submitted at: 2022-09-29 11:24:16
 * Problem URL: https://atcoder.jp/contests/abc085/tasks/abc085_d
 * Result: AC
 * Execution Time: 70 ms
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
  int n, h;
  cin >> n >> h;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  int maxim = 0;
  rep(i, n) maxim = max(maxim, v[i].first);
  sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
  });
  int ans = 0, cnt = 0, idx = 0;
  while (cnt < h) {
    if (idx < n && v[idx].second > maxim) {
      cnt += v[idx].second;
      idx++;
      ans++;
    }
    else {
      ans += (h - cnt - 1) / maxim + 1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}