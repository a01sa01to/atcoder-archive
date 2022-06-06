/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc147/submissions/32292813
 * Submitted at: 2022-06-07 00:16:42
 * Problem URL: https://atcoder.jp/contests/abc147/tasks/abc147_c
 * Result: AC
 * Execution Time: 10 ms
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
  vector a(n, vector<pair<int, int>>(0));
  rep(i, n) {
    int m;
    cin >> m;
    while (m--) {
      int x, y;
      cin >> x >> y;
      a[i].push_back({ --x, y });
    }
  }
  int ans = 0;
  rep(bit, 1 << n) {
    vector<int> chk(n, -1);
    bool ok = true;
    rep(i, n) {
      if (bit & (1 << i)) {
        if (chk[i] == 0) {
          ok = false;
          break;
        }
        chk[i] = 1;
        rep(j, a[i].size()) {
          auto [x, y] = a[i][j];
          if (chk[x] == -1) chk[x] = y;
          else if (chk[x] != y) {
            ok = false;
            break;
          }
        }
      }
      else {
        if (chk[i] == 1) {
          ok = false;
          break;
        }
        chk[i] = 0;
      }
    }
    if (ok) {
      ans = max(ans, __builtin_popcount(bit));
    }
  }
  cout << ans << endl;
  return 0;
}