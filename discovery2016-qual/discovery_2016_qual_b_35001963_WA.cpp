/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/discovery2016-qual/submissions/35001963
 * Submitted at: 2022-09-20 00:41:02
 * Problem URL: https://atcoder.jp/contests/discovery2016-qual/tasks/discovery_2016_qual_b
 * Result: WA
 * Execution Time: 39 ms
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
  vector<pair<int, int>> a(n);
  rep(i, n) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.begin(), a.end());
  int ans = 1;
  int now = -1;
  rep(i, n) {
    if (a[i].second < now) ans++;
    now = a[i].second;
  }
  if (a.back().second == 0) ans--;
  cout << ans << endl;
  return 0;
}