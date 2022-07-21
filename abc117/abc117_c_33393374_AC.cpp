/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc117/submissions/33393374
 * Submitted at: 2022-07-21 18:57:58
 * Problem URL: https://atcoder.jp/contests/abc117/tasks/abc117_c
 * Result: AC
 * Execution Time: 43 ms
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
  if (n >= m) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> x(m);
  rep(i, m) cin >> x[i];
  sort(x.begin(), x.end());
  vector<int> dist(m - 1);
  rep(i, m - 1) dist[i] = x[i + 1] - x[i];
  sort(dist.begin(), dist.end());
  ll ans = 0;
  rep(i, m - n) ans += dist[i];
  cout << ans << endl;
  return 0;
}