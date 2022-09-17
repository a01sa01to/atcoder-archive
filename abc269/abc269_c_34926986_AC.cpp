/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34926986
 * Submitted at: 2022-09-17 21:09:54
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_c
 * Result: AC
 * Execution Time: 62 ms
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
  ll x;
  cin >> x;
  vector<ll> c(0);
  for (ll i = 1; i <= x; i *= 2) {
    if (x & i) c.push_back(i);
  }
  Debug(c);
  vector<ll> ans(0);
  rep(bit, 1 << c.size()) {
    ll t = 0;
    rep(i, c.size()) {
      if (bit & 1 << i) t += c[i];
    }
    ans.push_back(t);
  }
  sort(ans.begin(), ans.end());
  for (auto a : ans) cout << a << endl;
  return 0;
}