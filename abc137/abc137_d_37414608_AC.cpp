/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc137/submissions/37414608
 * Submitted at: 2022-12-21 00:28:58
 * Problem URL: https://atcoder.jp/contests/abc137/tasks/abc137_d
 * Result: AC
 * Execution Time: 60 ms
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
  int n, m;
  cin >> n >> m;
  deque<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());
  int ans = 0;
  priority_queue<int> pq;
  for (int d = 1; d <= m; d++) {
    while (!v.empty() && v.front().first <= d) {
      pq.push(v.front().second);
      v.pop_front();
    }
    if (!pq.empty()) {
      ans += pq.top();
      pq.pop();
    }
  }
  cout << ans << endl;
  return 0;
}