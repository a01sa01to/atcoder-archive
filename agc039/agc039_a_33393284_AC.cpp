/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc039/submissions/33393284
 * Submitted at: 2022-07-21 18:53:05
 * Problem URL: https://atcoder.jp/contests/agc039/tasks/agc039_a
 * Result: AC
 * Execution Time: 8 ms
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
  string s;
  int k;
  cin >> s >> k;
  ll ans = 0;
  auto cnt = [&](string s) {
    pair<ll, bool> ret = { 0, false };
    rep(i, s.size() - 1) {
      if (s[i] == s[i + 1]) {
        ret.first++;
        s[i + 1] = '?';
      }
    }
    ret.second = (s.back() == '?');
    return ret;
  };
  auto [a, b] = cnt(s);
  ans += a;
  auto [c, d] = cnt((b ? '?' : s.back()) + s);
  ans += c * (k / 2);
  auto [e, f] = cnt((d ? '?' : s.back()) + s);
  ans += e * ((k - 1) / 2);
  cout << ans << endl;
  return 0;
}