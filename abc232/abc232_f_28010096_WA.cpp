/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/28010096
 * Submitted at: 2021-12-19 22:02:56
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_f
 * Result: WA
 * Execution Time: 42 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n, x, y;
  cin >> n >> x >> y;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  // ans[i] = iをbitで表現したとき、bitが立ってればそれをswapする
  vector<ll> ans(1 << n, 0);

  rep(i, 1 << n) {
    vector<ll> c = a;
    if (i & (1 << (n - 1))) {
      rep(j, n - 1) {
        if (i & (1 << j)) {
          ans[i] += y;
          swap(c[n - j - 1], c[n - j - 2]);
        }
      }
    }
    else {
      rep(j, n - 1) {
        if (i & (1 << j)) {
          ans[i] += y;
          swap(c[j], c[j + 1]);
        }
      }
    }
    rep(j, n) {
      if (c[j] != b[j]) {
        ans[i] += abs(c[j] - b[j]) * x;
      }
    }
  }
  cout << *min_element(ans.begin(), ans.end()) << endl;
  return 0;
}