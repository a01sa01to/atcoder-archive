/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc138/submissions/30816114
 * Submitted at: 2022-04-09 21:52:12
 * Problem URL: https://atcoder.jp/contests/arc138/tasks/arc138_a
 * Result: RE
 * Execution Time: 154 ms
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
  vector<pair<int, int>> a(k);
  vector<int> b(n - k);
  rep(i, k) {
    cin >> a[i].first;
    a[i].second = i;
  }
  rep(i, n - k) cin >> b[i];
  sort(a.begin(), a.end());

  const int INF = 1e9;
  int ans = INF;
  rep(i, n - k) {
    auto itr = lower_bound(a.begin(), a.end(), make_pair(b[i] - 1, INF));
    Debug(b[i], *itr);
    while (itr >= a.begin()) {
      if (itr->second == INF) break;
      if (itr->first >= b[i]) {
        if (itr == a.begin()) break;
        itr--;
        continue;
      }
      Debug(*itr, i + k - itr->second);
      ans = min(ans, i + k - itr->second);
      itr->second = INF;
      if (itr == a.begin()) break;
      itr--;
    }
    Debug(ans);
  }

  if (ans == INF)
    cout << -1 << endl;
  else
    cout << ans << endl;

  return 0;
}