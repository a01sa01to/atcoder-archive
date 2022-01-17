/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28606614
 * Submitted at: 2022-01-18 00:05:37
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_af
 * Result: AC
 * Execution Time: 81 ms
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
  int n;
  cin >> n;
  vector a(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> a[i][j];
  int m;
  cin >> m;
  vector b(n, vector<bool>(n));
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    --x, --y;
    b[x][y] = true;
    b[y][x] = true;
  }
  vector<int> p(n);
  iota(p.begin(), p.end(), 0);
  int ans = -1;
  do {
    int cnt = 0;
    bool chk = true;
    rep(i, n) {
      if (i > 0 && b[p[i - 1]][p[i]]) chk = false;
      cnt += a[p[i]][i];
    }
    if (chk) {
      if (ans == -1) ans = cnt;
      else
        ans = min(ans, cnt);
    }
  } while (next_permutation(p.begin(), p.end()));
  cout << ans << endl;
  return 0;
}