/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35104979
 * Submitted at: 2022-09-24 21:19:16
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_d
 * Result: WA
 * Execution Time: 13 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  rep(i, k) cin >> a[i];
  ll ans = 0;
  bool ao = false;
  while (n > 0) {
    if (!ao) {
      // chokudai
      auto it = upper_bound(a.begin(), a.end(), n);
      if (it != a.begin()) {
        ans += *prev(it);
        n -= *prev(it);
      }
      ao = true;
    }
    else {
      // aoki
      auto it = upper_bound(a.begin(), a.end(), n);
      if (it != a.begin()) n -= *prev(it);
      ao = false;
    }
  }
  cout << ans << endl;
  return 0;
}