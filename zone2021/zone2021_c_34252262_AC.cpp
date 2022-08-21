/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/zone2021/submissions/34252262
 * Submitted at: 2022-08-22 00:06:47
 * Problem URL: https://atcoder.jp/contests/zone2021/tasks/zone2021_c
 * Result: AC
 * Execution Time: 17 ms
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
  vector<vector<int>> v(n);
  rep(i, n) {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    v[i] = { a, b, c, d, e };
  }
  ll ok = 0, ng = 1e9 + 1;
  while (ng - ok > 1) {
    ll mid = (ok + ng) / 2;
    constexpr int bit = 1 << 5;
    vector<bool> found(bit, false);
    rep(i, n) {
      int tmp = 0;
      rep(j, 5) if (v[i][j] >= mid) tmp |= 1 << j;
      found[tmp] = true;
    }
    bool chk = false;
    rep(i, bit) rep(j, bit) rep(k, bit) {
      if (found[i] && found[j] && found[k] && (i | j | k) == bit - 1) chk = true;
    }
    (chk ? ok : ng) = mid;
  }
  cout << ok << endl;
  return 0;
}