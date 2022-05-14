/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc112/submissions/31648713
 * Submitted at: 2022-05-14 16:07:33
 * Problem URL: https://atcoder.jp/contests/abc112/tasks/abc112_c
 * Result: AC
 * Execution Time: 7 ms
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
  vector<tuple<int, int, int>> v;
  rep(i, n) {
    int a, b, c;
    cin >> a >> b >> c;
    v.push_back({ a, b, c });
  }
  for (int x = 0; x <= 100; ++x)
    for (int y = 0; y <= 100; ++y) {
      int h = -1;
      rep(i, n) {
        auto [xi, yi, hi] = v[i];
        if (hi != 0 && h == -1) {
          h = hi + abs(x - xi) + abs(y - yi);
          break;
        }
      }
      bool chk = true;
      rep(i, n) {
        auto [xi, yi, hi] = v[i];
        if (hi != max(h - abs(x - xi) - abs(y - yi), 0)) {
          chk = false;
          break;
        }
      }
      if (chk) {
        printf("%d %d %d\n", x, y, h);
        return 0;
      }
    }
  return 0;
}