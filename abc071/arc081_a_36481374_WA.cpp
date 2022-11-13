/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc071/submissions/36481374
 * Submitted at: 2022-11-14 00:30:32
 * Problem URL: https://atcoder.jp/contests/abc071/tasks/arc081_a
 * Result: WA
 * Execution Time: 46 ms
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
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  ll x = 0, y = 0;
  while (a.size() >= 2) {
    ll s = a.back();
    a.pop_back();
    ll t = a.back();
    a.pop_back();
    if (s == t) {
      if (x == 0) { x = s; }
      else if (y == 0) {
        y = s;
        break;
      }
    }
  }
  cout << x * y << endl;
  return 0;
}