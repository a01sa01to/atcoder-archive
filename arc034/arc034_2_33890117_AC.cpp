/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc034/submissions/33890117
 * Submitted at: 2022-08-09 09:32:24
 * Problem URL: https://atcoder.jp/contests/arc034/tasks/arc034_2
 * Result: AC
 * Execution Time: 6 ms
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
  ll n;
  cin >> n;
  auto f = [&](ll x) {
    ll ret = 0;
    string s = to_string(x);
    rep(i, s.size()) ret += (s[i] - '0');
    return ret;
  };
  vector<ll> ans(0);
  for (ll a = max(1LL, n - 162); a <= n; a++) {
    ll x = a + f(a);
    if (x == n) {
      ans.push_back(a);
    }
  }
  cout << ans.size() << endl;
  for (auto a : ans) cout << a << endl;
  return 0;
}