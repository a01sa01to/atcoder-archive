/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36646648
 * Submitted at: 2022-11-19 23:02:36
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_d
 * Result: AC
 * Execution Time: 310 ms
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
  vector<pair<ll, ll>> a(n, { -1, 0 });
  rep(i, n) cin >> a[i].second;
  int q;
  cin >> q;
  pair<ll, ll> update = { -1, -1 };
  rep(i, q) {
    int t;
    cin >> t;
    if (t == 1) {
      ll x;
      cin >> x;
      update = { i, x };
    }
    else if (t == 2) {
      ll idx, x;
      cin >> idx >> x;
      --idx;
      if (update.first > a[idx].first) {
        a[idx] = update;
      }
      a[idx] = { i, a[idx].second + x };
    }
    else {
      ll idx;
      cin >> idx;
      --idx;
      if (update.first > a[idx].first) {
        a[idx] = update;
      }
      cout << a[idx].second << endl;
    }
  }
  return 0;
}