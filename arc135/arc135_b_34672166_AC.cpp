/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc135/submissions/34672166
 * Submitted at: 2022-09-07 19:06:12
 * Problem URL: https://atcoder.jp/contests/arc135/tasks/arc135_b
 * Result: AC
 * Execution Time: 120 ms
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
  vector<ll> s(n);
  rep(i, n) cin >> s[i];
  vector<ll> a(n + 2, 0);
  rep(i, n) a[i + 2] = s[i] - a[i] - a[i + 1];
  ll x = 1e9, y = 1e9, z = 1e9;
  rep(i, n + 2) {
    if (i % 3 == 2) {
      if (a[i] < 0) {
        cout << "No" << endl;
        return 0;
      }
      z = min(z, a[i]);
    }
    else if (i % 3 == 1) {
      y = min(y, a[i]);
    }
    else {
      x = min(x, a[i]);
    }
  }
  // Debug(a, x, y, z);
  if (-(x + y) > z) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  a[0] = -x, a[1] = -y;
  rep(i, n) a[i + 2] = s[i] - a[i] - a[i + 1];
  rep(i, n + 2) cout << a[i] << " ";
  cout << endl;
  return 0;
}