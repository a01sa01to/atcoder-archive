/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc102/submissions/33383079
 * Submitted at: 2022-07-21 00:22:56
 * Problem URL: https://atcoder.jp/contests/abc102/tasks/arc100_a
 * Result: AC
 * Execution Time: 81 ms
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

ll f(ll b, const vector<ll>& a) {
  ll ret = 0;
  rep(i, a.size()) ret += abs(a[i] - b);
  return ret;
}

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i] -= i + 1;
  }
  ll l = -1e9, r = 1e9 + 1;
  while (l + 2 < r) {
    ll c1 = l + (r - l) / 3;
    ll c2 = r - (r - l) / 3;
    ll f1 = f(c1, a);
    ll f2 = f(c2, a);
    Debug(c1, c2, f1, f2);
    if (f1 < f2)
      r = c2;
    else
      l = c1;
    Debug(l, r);
  }
  Debug(l, r);
  Debug(f(l, a), f(l + 1, a), f(l + 2, a));
  cout << min({ f(l, a), f(l + 1, a), f(l + 2, a) }) << endl;
  return 0;
}