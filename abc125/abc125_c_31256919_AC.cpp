/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc125/submissions/31256919
 * Submitted at: 2022-04-25 12:40:45
 * Problem URL: https://atcoder.jp/contests/abc125/tasks/abc125_c
 * Result: AC
 * Execution Time: 47 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> sumL(n, 0), sumR(n, 0);
  rep(i, n) {
    if (i == 0) continue;
    sumL[i] = gcd(sumL[i - 1], a[i - 1]);
  }
  for (int i = n - 1; i >= 0; --i) {
    if (i == 0) continue;
    sumR[i - 1] = gcd(sumR[i], a[i]);
  }
  int ans = 0;
  rep(i, n) ans = max(ans, gcd(sumL[i], sumR[i]));
  cout << ans << endl;
  return 0;
}