/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc050/submissions/35220116
 * Submitted at: 2022-09-29 00:15:59
 * Problem URL: https://atcoder.jp/contests/abc050/tasks/arc066_a
 * Result: AC
 * Execution Time: 61 ms
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

using mint = modint1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  mint ans = 1;
  rep(i, n) {
    if (a[i] % 2 == n % 2) ans = 0;
  }
  map<int, int> cnt;
  rep(i, n) cnt[a[i]]++;
  for (auto [k, v] : cnt) {
    if (k == 0) {
      if (v != 1) ans = 0;
    }
    else {
      if (v != 2) ans = 0;
      ans *= 2;
    }
  }
  cout << ans.val() << endl;
  return 0;
}