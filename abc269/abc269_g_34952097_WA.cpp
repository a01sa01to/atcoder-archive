/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34952097
 * Submitted at: 2022-09-17 22:38:02
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_g
 * Result: WA
 * Execution Time: 3308 ms
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
  ll x = 0;
  unordered_map<ll, ll> dist;
  dist[0] = 0;
  rep(_, n) {
    ll a, b;
    cin >> a >> b;
    x += a;
    for (auto [k, v] : dist) {
      if (!dist.count(k + b - a)) {
        dist[k + b - a] = v + 1;
      }
      else if (dist[k + b - a] > v + 1) {
        dist[k + b - a] = v + 1;
      }
    }
  }
  Debug(map(dist.begin(), dist.end()));
  for (int k = 0; k <= m; k++) {
    cout << (dist.count(k - x) ? dist[k - x] : -1) << endl;
  }
  return 0;
}