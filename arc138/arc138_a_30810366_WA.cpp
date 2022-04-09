/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc138/submissions/30810366
 * Submitted at: 2022-04-09 21:18:53
 * Problem URL: https://atcoder.jp/contests/arc138/tasks/arc138_a
 * Result: WA
 * Execution Time: 147 ms
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
  vector<int> a(k);
  vector<pair<int, int>> b(n - k);
  rep(i, k) cin >> a[i];
  rep(i, n - k) {
    cin >> b[i].first;
    b[i].second = i + k;
  }
  sort(b.begin(), b.end());

  const int INF = 1e9;
  int ans = INF;
  rep(i, k) {
    auto itr = lower_bound(b.begin(), b.end(), make_pair(a[i] + 1, 0));
    if (itr == b.end()) continue;
    ans = min(ans, itr->second - i);
  }

  if (ans == INF)
    cout << -1 << endl;
  else
    cout << ans << endl;

  return 0;
}