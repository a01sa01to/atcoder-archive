/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/27850066
 * Submitted at: 2021-12-11 22:34:40
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_e
 * Result: WA
 * Execution Time: 4 ms
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
  ll n, x;
  cin >> n >> x;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> r(n);
  r[n - 1] = x / a[n - 1];
  rep(i, n - 1) r[i] = (x % a[i + 1]) / a[i];
  vector<bool> b(n);
  rep(i, n - 1) {
    ll tmp = (a[i + 1] / a[i]) - r[i];
    if (tmp < r[i]) {
      r[i] = tmp;
      b[i] = true;
    }
  }
  ll ans = 0;
  bool prev = false;
  rep(i, n) {
    ans += r[i];
    if (b[i] && prev) {
      prev = true;
      --ans;
    }
    else if (b[i]) {
      prev = true;
    }
    else if (prev) {
      ++ans;
      prev = false;
    }
  }
  cout << ans << endl;
  return 0;
}