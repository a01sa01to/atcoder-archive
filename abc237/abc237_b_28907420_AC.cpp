/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/28907420
 * Submitted at: 2022-01-30 21:08:41
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_b
 * Result: AC
 * Execution Time: 179 ms
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
  int h, w;
  cin >> h >> w;
  vector a(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, w) {
    rep(j, h) {
      cout << a[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}