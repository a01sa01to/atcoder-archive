/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ttpc2022/submissions/36267032
 * Submitted at: 2022-11-06 00:00:11
 * Problem URL: https://atcoder.jp/contests/ttpc2022/tasks/ttpc2022_a
 * Result: AC
 * Execution Time: 21 ms
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
  ll x, y;
  cin >> x >> y;
  ll t = gcd(x - 2015, y - 2015);
  vector<ll> div(0);
  for (ll i = 1; i * i <= t; i++) {
    if (t % i == 0) {
      div.push_back(i);
      if (i * i != t) div.push_back(t / i);
    }
  }
  sort(div.begin(), div.end());
  for (auto d : div) cout << d << endl;
  return 0;
}