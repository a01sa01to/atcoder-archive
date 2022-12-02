/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc181/submissions/36932544
 * Submitted at: 2022-12-03 00:20:27
 * Problem URL: https://atcoder.jp/contests/abc181/tasks/abc181_e
 * Result: AC
 * Execution Time: 156 ms
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
  vector<ll> h(n), w(m);
  rep(i, n) cin >> h[i];
  rep(i, m) cin >> w[i];
  sort(h.begin(), h.end());
  vector<ll> sumodd(1, 0), sumeven(1, 0);
  for (int i = 0; i + 1 < n; i += 2) sumodd.push_back(sumodd.back() + (h[i + 1] - h[i]));
  for (int i = 1; i < n; i += 2) sumeven.push_back(sumeven.back() + (h[i + 1] - h[i]));
  Debug(sumodd, sumeven);
  ll ans = 1e18;
  rep(i, m) {
    auto itr = lower_bound(h.begin(), h.end(), w[i]);
    int idx = itr - h.begin();
    ll tmp = 0;
    tmp += sumodd[idx / 2];
    tmp += sumeven.back() - sumeven[idx / 2];
    if (idx % 2 == 0) {
      // うしろ
      Debug(tmp, h[idx] - w[i]);
      tmp += h[idx] - w[i];
    }
    else {
      // まえ
      Debug(tmp, w[i] - h[idx - 1]);
      tmp += w[i] - h[idx - 1];
    }
    Debug(idx, tmp);
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}