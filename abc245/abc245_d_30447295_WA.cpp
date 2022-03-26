/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30447295
 * Submitted at: 2022-03-26 21:20:23
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_d
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n + 1), c(n + m + 1), b(m + 1, 0);
  rep(i, n + 1) cin >> a[i];
  rep(i, n + m + 1) cin >> c[i];
  // b[m] = c[m + n] - a[n];
  // b[m-1] = (c[m+n-1] - a[n-1] *b[m]) / a[n];
  // b[m-2] = (c[m+n-2] - (a[n-2] * b[m] + a[n-1] * b[m-1])) / a[n];
  // b[m-3] = (c[m+n-3] - (a[n-3] * b[m] + a[n-2] * b[m-1] + a[n-1] * b[m-2])) / a[n];
  for (int i = m; i >= 0; i--) {  // i=m-2
    b[i] = c[i + n];
    for (int j = m - i; j > 0; j--) {  // j=2,1
      b[i] -= a[n - j] * b[i + j];
    }
    b[i] /= a[n];
  }
  for (int x : b) cout << x << " ";
  cout << endl;
  return 0;
}