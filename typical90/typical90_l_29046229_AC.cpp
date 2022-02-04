/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29046229
 * Submitted at: 2022-02-05 00:29:34
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_l
 * Result: AC
 * Execution Time: 240 ms
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
  int h, w, q;
  cin >> h >> w >> q;
  vector Grid(h, vector<bool>(w, false));
  dsu d(h * w);
  auto getId = [&](int r, int c) {
    return r * w + c;
  };
  rep(_, q) {
    int t;
    cin >> t;
    if (t == 1) {
      int r, c;
      cin >> r >> c;
      --r, --c;
      Grid[r][c] = true;
      if (r > 0 && Grid[r - 1][c]) d.merge(getId(r, c), getId(r - 1, c));
      if (r < h - 1 && Grid[r + 1][c]) d.merge(getId(r, c), getId(r + 1, c));
      if (c > 0 && Grid[r][c - 1]) d.merge(getId(r, c), getId(r, c - 1));
      if (c < w - 1 && Grid[r][c + 1]) d.merge(getId(r, c), getId(r, c + 1));
    }
    else {
      int ra, ca, rb, cb;
      cin >> ra >> ca >> rb >> cb;
      --ra, --ca, --rb, --cb;
      bool chk = true;
      chk &= Grid[ra][ca];
      chk &= Grid[rb][cb];
      chk &= d.same(getId(ra, ca), getId(rb, cb));
      cout << (chk ? "Yes" : "No") << endl;
    }
  }
  return 0;
}