/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc144/submissions/33275755
 * Submitted at: 2022-07-17 00:00:03
 * Problem URL: https://atcoder.jp/contests/arc144/tasks/arc144_b
 * Result: AC
 * Execution Time: 201 ms
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
  int n, a, b;
  cin >> n >> a >> b;
  vector<ll> v(n);
  rep(i, n) cin >> v[i];
  ll l = *min_element(v.begin(), v.end());
  ll r = *max_element(v.begin(), v.end()) + 1;
  while (r - l > 1) {
    ll mid = (l + r) / 2;
    ll t = 0;
    rep(i, n) {
      if (v[i] > mid)
        t -= (v[i] - mid) / b;
      else
        t += (mid - v[i] + a - 1) / a;
    }
    Debug(l, r, mid, t);
    (t <= 0 ? l : r) = mid;
  }
  cout << l << endl;
  return 0;
}