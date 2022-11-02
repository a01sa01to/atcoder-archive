/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/apc001/submissions/36161949
 * Submitted at: 2022-11-03 00:01:54
 * Problem URL: https://atcoder.jp/contests/apc001/tasks/apc001_b
 * Result: WA
 * Execution Time: 17 ms
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
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  ll asum = accumulate(a.begin(), a.end(), 0LL), bsum = accumulate(b.begin(), b.end(), 0LL);
  if (asum > bsum) {
    cout << "No" << endl;
    return 0;
  }
  vector<ll> c;
  rep(i, n) {
    if (a[i] > b[i]) c.push_back(a[i] - b[i]);
    else if (a[i] < b[i])
      c.push_back((b[i] - a[i] + 1) / 2);
  }
  if (accumulate(c.begin(), c.end(), 0LL) <= bsum - asum) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}