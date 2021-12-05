/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc131/submissions/27727598
 * Submitted at: 2021-12-06 00:17:02
 * Problem URL: https://atcoder.jp/contests/arc131/tasks/arc131_b
 * Result: AC
 * Execution Time: 54 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector v(h, vector<int>(w));
  rep(i, h) rep(j, w) {
    char c;
    cin >> c;
    v[i][j] = (c == '.' ? 0 : c - '0');
  }
  rep(i, h) rep(j, w) {
    if (v[i][j] == 0) {
      int u = 0, d = 0, l = 0, r = 0;
      if (i > 0) u = v[i - 1][j];
      if (i + 1 < h) d = v[i + 1][j];
      if (j > 0) l = v[i][j - 1];
      if (j + 1 < w) r = v[i][j + 1];
      for (int k = 1; k <= 5; ++k) {
        if (k != u && k != d && k != l && k != r) {
          v[i][j] = k;
          break;
        }
      }
    }
  }
  rep(i, h) {
    rep(j, w) cout << v[i][j];
    cout << endl;
  }
  return 0;
}