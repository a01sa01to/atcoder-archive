/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35272695
 * Submitted at: 2022-10-01 21:03:19
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_b
 * Result: AC
 * Execution Time: 449 ms
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
  int n, q;
  cin >> n >> q;
  vector a(n, vector<int>(0));
  rep(i, n) {
    int l;
    cin >> l;
    rep(j, l) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }
  while (q--) {
    int x, y;
    cin >> x >> y;
    --x, --y;
    cout << a[x][y] << endl;
  }
  return 0;
}