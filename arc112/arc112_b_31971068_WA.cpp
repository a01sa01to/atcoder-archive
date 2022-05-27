/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc112/submissions/31971068
 * Submitted at: 2022-05-27 10:18:15
 * Problem URL: https://atcoder.jp/contests/arc112/tasks/arc112_b
 * Result: WA
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

pair<ll, ll> ans(ll b, ll c) {
  if (c % 2) {
    ll n = (c - 1) / 2;
    return { -b - n, -b + n };
  }
  else {
    ll n = c / 2;
    return { b - n, b + n - 1 };
  }
}

int main() {
  ll b, c;
  cin >> b >> c;
  auto [w, x] = ans(b, c);
  auto [y, z] = ans(b, c - 1);
  cout << (x - w + 1) + (z - y + 1) - max(0LL, min(x, z) - max(w, y) + 1) << endl;
  return 0;
}