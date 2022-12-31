/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc011/submissions/37666168
 * Submitted at: 2023-01-01 02:20:54
 * Problem URL: https://atcoder.jp/contests/abc011/tasks/abc011_4
 * Result: TLE
 * Execution Time: 2206 ms
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
  ll n, d, x, y;
  cin >> n >> d >> x >> y;
  map<pair<ll, ll>, double> mp;
  mp[{ 0, 0 }] = 1;
  rep(_, n) {
    map<pair<ll, ll>, double> nmp;
    for (auto [p, prob] : mp) {
      auto [x, y] = p;
      nmp[{ x + d, y }] += prob / 4;
      nmp[{ x - d, y }] += prob / 4;
      nmp[{ x, y + d }] += prob / 4;
      nmp[{ x, y - d }] += prob / 4;
    }
    swap(mp, nmp);
  }
  cout << fixed << setprecision(10) << mp[{ x, y }] << endl;
  return 0;
}