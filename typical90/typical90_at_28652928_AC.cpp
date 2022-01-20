/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28652928
 * Submitted at: 2022-01-21 00:26:43
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_at
 * Result: AC
 * Execution Time: 98 ms
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
  int n;
  cin >> n;
  vector<ll> a(46), b(46), c(46);
  rep(i, n) {
    int x;
    cin >> x;
    ++a[x % 46];
  }
  rep(i, n) {
    int x;
    cin >> x;
    ++b[x % 46];
  }
  rep(i, n) {
    int x;
    cin >> x;
    ++c[x % 46];
  }
  ll ans = 0;
  rep(i, 46) rep(j, 46) rep(k, 46) {
    if ((i + j + k) % 46 == 0) {
      ans += a[i] * b[j] * c[k];
    }
  }
  cout << ans << endl;
  return 0;
}