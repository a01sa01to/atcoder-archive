/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36066396
 * Submitted at: 2022-10-29 22:16:31
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_f
 * Result: WA
 * Execution Time: 2210 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  map<int, int> dist;
  dist[0] = 0;
  queue<pair<int, int>> que;
  que.push({ -1, 0 });
  while (!que.empty()) {
    auto [i, d] = que.front();
    que.pop();
    for (int ni = i + 1; ni <= n; ni++) {
      for (int nj = ni + 1; nj <= n; nj++) {
        int nd = d + sum[nj] - sum[ni];
        if (dist.count(nd)) continue;
        dist[nd] = dist[d] + 1;
        que.push({ ni, nd });
      }
    }
  }
  Debug(dist);
  for (int x = 1; x <= m; x++) {
    int delta = sum[n] - x;
    if (dist.count(delta)) {
      cout << dist[delta] << endl;
    }
    else {
      cout << -1 << endl;
    }
  }
  return 0;
}