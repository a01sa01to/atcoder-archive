/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32421201
 * Submitted at: 2022-06-12 00:00:20
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_e
 * Result: WA
 * Execution Time: 809 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> s(n - 1), x(m);
  rep(i, n - 1) cin >> s[i];
  rep(i, m) cin >> x[i];
  vector<ll> b(n);
  rep(i, n) b[i] = (i == 0 ? 0 : s[i] - b[i - 1]);
  map<ll, ll> cand;
  rep(i, n) {
    rep(j, m) {
      ll c = x[j] - b[i];
      if (i % 2 == 0) c = -c;
      cand[c]++;
    }
  }
  ll ans = 0;
  for (auto [k, v] : cand) ans = max(ans, v);
  cout << ans << endl;
  return 0;
}