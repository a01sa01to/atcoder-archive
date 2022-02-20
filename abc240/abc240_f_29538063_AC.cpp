/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/29538063
 * Submitted at: 2022-02-20 22:08:56
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_f
 * Result: AC
 * Execution Time: 468 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void solve() {
  int n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> a(n);
  rep(i, n) cin >> a[i].first >> a[i].second;

  ll sum = 0, ans = a[0].first, now = 0;
  rep(i, n) {
    auto [x, y] = a[i];
    if (sum > 0 && x < 0) {
      ll tmp = min(sum / abs(x), y);
      y -= tmp;
      now += x * (tmp * (tmp + 1) / 2) + sum * tmp;
      sum += x * tmp;
      ans = max(ans, now);
      Debug(now);
    }
    now += x * (y * (y + 1) / 2) + sum * y;
    sum += x * y;
    ans = max(ans, now);
    Debug(now);
  }
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}