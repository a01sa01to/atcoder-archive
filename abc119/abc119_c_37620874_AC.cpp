/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc119/submissions/37620874
 * Submitted at: 2022-12-30 00:01:12
 * Problem URL: https://atcoder.jp/contests/abc119/tasks/abc119_c
 * Result: AC
 * Execution Time: 29 ms
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

inline int pow3(int x) {
  int ret = 1;
  rep(_, x) ret *= 3;
  return ret;
}

inline int get(int p3, int i) {
  return (p3 / pow3(i)) % 3;
}

int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> l(n);
  rep(i, n) cin >> l[i];
  int ans = 1e9;
  rep(bit, 1 << n) {
    int p3 = pow3(__builtin_popcount(bit));
    rep(tri, p3) {
      vector<int> x, y, z;
      int idx = 0;
      rep(i, n) {
        if (bit & (1 << i)) {
          int t = get(tri, idx++);
          if (t == 0) x.push_back(l[i]);
          if (t == 1) y.push_back(l[i]);
          if (t == 2) z.push_back(l[i]);
        }
      }
      if (x.size() == 0 || y.size() == 0 || z.size() == 0) continue;
      Debug(x, y, z);
      int cost = 0;
      cost += 10 * (x.size() - 1) + abs(a - accumulate(x.begin(), x.end(), 0));
      cost += 10 * (y.size() - 1) + abs(b - accumulate(y.begin(), y.end(), 0));
      cost += 10 * (z.size() - 1) + abs(c - accumulate(z.begin(), z.end(), 0));
      Debug(cost);
      ans = min(ans, cost);
    }
  }
  cout << ans << endl;
  return 0;
}