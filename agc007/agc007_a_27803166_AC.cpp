/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc007/submissions/27803166
 * Submitted at: 2021-12-11 11:20:56
 * Problem URL: https://atcoder.jp/contests/agc007/tasks/agc007_a
 * Result: AC
 * Execution Time: 5 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector a(h, vector<bool>(w, false));
  rep(i, h) rep(j, w) {
    char c;
    cin >> c;
    if (c == '#') a[i][j] = true;
  }
  bool ans = true;
  rep(i, h) rep(j, w) {
    if (a[i][j]) {
      if (i - 1 >= 0 && j - 1 >= 0 && a[i - 1][j] && a[i][j - 1]) ans = false;
      if (i + 1 < h && j + 1 < w && a[i + 1][j] && a[i][j + 1]) ans = false;
    }
  }
  puts(ans ? "Possible" : "Impossible");
  return 0;
}