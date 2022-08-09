/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc114/submissions/33890911
 * Submitted at: 2022-08-09 10:37:21
 * Problem URL: https://atcoder.jp/contests/abc114/tasks/abc114_d
 * Result: AC
 * Execution Time: 9 ms
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
  map<int, int> pf;
  for (int _ = 1; _ <= n; _++) {
    int t = _;
    for (int i = 2; i * i <= n; i++) {
      while (t % i == 0) {
        pf[i]++;
        t /= i;
      }
    }
    if (t != 1) pf[t]++;
  }
  Debug(pf);
  int ans = 0;
  for (int i = 2; i <= n; i++) {
    if (pf[i] >= 74) ans++;
  }
  for (int i = 2; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      (pf[i] >= 24 && pf[j] >= 2) && ans++;
      (pf[i] >= 2 && pf[j] >= 24) && ans++;

      (pf[i] >= 14 && pf[j] >= 4) && ans++;
      (pf[i] >= 4 && pf[j] >= 14) && ans++;
    }
  }
  for (int i = 2; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      for (int k = j + 1; k <= n; k++) {
        (pf[i] >= 4 && pf[j] >= 4 && pf[k] >= 2) && ans++;
        (pf[i] >= 4 && pf[j] >= 2 && pf[k] >= 4) && ans++;
        (pf[i] >= 2 && pf[j] >= 4 && pf[k] >= 4) && ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}