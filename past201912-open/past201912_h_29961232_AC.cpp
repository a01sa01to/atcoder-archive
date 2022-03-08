/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/29961232
 * Submitted at: 2022-03-09 00:46:20
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_h
 * Result: AC
 * Execution Time: 136 ms
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

int main() {
  ll n;
  cin >> n;
  vector<ll> c(n);
  ll minim_odd = 1e9, minim_even = 1e9;
  rep(i, n) cin >> c[i];
  rep(i, n) {
    if (i % 2) {
      minim_even = min(minim_even, c[i]);
    }
    else {
      minim_odd = min(minim_odd, c[i]);
    }
  }
  int q;
  cin >> q;
  ll ans = 0, odd = 0, even = 0;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int x, a;
      cin >> x >> a;
      --x;
      if (x % 2) {
        if (c[x] - even >= a) {
          ans += a;
          c[x] -= a;
          minim_even = min(minim_even, c[x]);
        }
      }
      else {
        if (c[x] - odd >= a) {
          ans += a;
          c[x] -= a;
          minim_odd = min(minim_odd, c[x]);
        }
      }
    }
    else if (t == 2) {
      ll a;
      cin >> a;
      if (minim_odd >= a) {
        ans += a * ((n + 1) / 2);
        minim_odd -= a;
        odd += a;
      }
    }
    else {
      ll a;
      cin >> a;
      if (minim_even >= a && minim_odd >= a) {
        ans += a * n;
        minim_even -= a;
        minim_odd -= a;
        even += a;
        odd += a;
      }
    }
  }
  cout << ans << endl;
  return 0;
}