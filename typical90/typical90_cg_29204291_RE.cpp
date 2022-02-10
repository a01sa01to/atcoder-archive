/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29204291
 * Submitted at: 2022-02-11 00:17:36
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_cg
 * Result: RE
 * Execution Time: 222 ms
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
  ll k;
  cin >> k;
  vector<ll> div(0);
  for (ll i = 1; i * i <= k; ++i) {
    if (k % i == 0) {
      div.push_back(i);
      if (i * i != k) div.push_back(k / i);
    }
  }
  sort(div.begin(), div.end());
  ll ans = 0;
  for (ll i = 0; i < div.size(); ++i)
    for (ll j = i; j < div.size(); ++j) {
      ll t = div[i] * div[j];
      if (k % t == 0 && k / t >= div[j]) ++ans;
    }
  cout << ans << endl;
  return 0;
}