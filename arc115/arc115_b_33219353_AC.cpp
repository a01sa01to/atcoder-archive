/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/33219353
 * Submitted at: 2022-07-14 18:51:50
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_b
 * Result: AC
 * Execution Time: 85 ms
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
  vector c(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> c[i][j];
  vector<int> a(n, 2e9), b(n, 2e9);
  bool ans = true;
  int tmp = *min_element(c[0].begin(), c[0].end());
  rep(j, n) b[j] = c[0][j] - tmp;
  rep(i, n) a[i] = c[i][0] - b[0];
  Debug(a, b);
  rep(i, n) rep(j, n) {
    if (a[i] < 0 || b[i] < 0 || a[i] + b[j] != c[i][j]) {
      ans = false;
    }
  }
  puts(ans ? "Yes" : "No");
  if (ans) {
    rep(i, n) cout << a[i] << " ";
    cout << endl;
    rep(i, n) cout << b[i] << " ";
    cout << endl;
  }
  return 0;
}