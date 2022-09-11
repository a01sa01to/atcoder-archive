/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc148/submissions/34795644
 * Submitted at: 2022-09-11 22:18:37
 * Problem URL: https://atcoder.jp/contests/arc148/tasks/arc148_a
 * Result: AC
 * Execution Time: 82 ms
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
  vector<ll> b(n - 1);
  rep(i, n - 1) {
    b[i] = a[i + 1] - a[i];
  }
  Debug(b);
  ll t = 0;
  rep(i, n - 1) t = gcd(t, b[i]);
  Debug(t);
  cout << (t == 1 ? 2 : 1) << endl;
  return 0;
}