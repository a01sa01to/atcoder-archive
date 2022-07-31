/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/33665059
 * Submitted at: 2022-07-31 21:08:12
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_c
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  fenwick_tree<int> ft(n);
  rep(i, n) {
    if (a[i] == i + 1) ft.add(i, 1);
  }
  ll ans = 0;
  rep(i, n) {
    if (a[i] == i + 1) {
      ans += ft.sum(i + 1, n);
      Debug(a[i], ans);
    }
    else if (a[i] > i + 1) {
      ans += (a[a[i] - 1] == i + 1);
      Debug(a[i], a[a[i] - 1]);
    }
  }
  cout << ans << endl;
  return 0;
}