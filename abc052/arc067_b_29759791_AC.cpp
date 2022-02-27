/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc052/submissions/29759791
 * Submitted at: 2022-02-28 00:11:34
 * Problem URL: https://atcoder.jp/contests/abc052/tasks/arc067_b
 * Result: AC
 * Execution Time: 40 ms
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
  ll n, a, b;
  cin >> n >> a >> b;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  ll ans = 0;
  rep(i, n - 1) {
    ans += min((x[i + 1] - x[i]) * a, b);
  }
  cout << ans << endl;
  return 0;
}