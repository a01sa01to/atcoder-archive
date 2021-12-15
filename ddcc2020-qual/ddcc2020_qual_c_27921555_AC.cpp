/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ddcc2020-qual/submissions/27921555
 * Submitted at: 2021-12-15 15:09:16
 * Problem URL: https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_c
 * Result: AC
 * Execution Time: 29 ms
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
  int h, w, k;
  cin >> h >> w >> k;
  vector Cake(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Cake[i][j];
  vector ans(h, vector<int>(w, 0));
  int cnt = 0;
  set<int> notSeen;
  rep(i, h) {
    bool seen = false;
    rep(j, w) {
      if (Cake[i][j] == '#') ++cnt;
      if (Cake[i][j] == '#' && !seen) {
        seen = true;
        for (int _j = 0; _j < j; ++_j) ans[i][_j] = cnt;
      }
      ans[i][j] = cnt;
    }
    if (!seen) notSeen.insert(i);
  }
  rep(j, w) {
    int prev = 0;
    rep(i, h) {
      if (!notSeen.count(i)) {
        for (int _i = prev; _i < i; ++_i) ans[_i][j] = ans[i][j];
        prev = i + 1;
      }
    }
  }
  if (notSeen.count(h - 1)) {
    rep(j, w) {
      int i = h - 1;
      while (notSeen.count(i)) --i;
      for (int _i = i; _i < h; ++_i) ans[_i][j] = ans[i][j];
    }
  }
  rep(i, h) {
    rep(j, w) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}