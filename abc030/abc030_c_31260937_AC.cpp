/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc030/submissions/31260937
 * Submitted at: 2022-04-25 16:10:49
 * Problem URL: https://atcoder.jp/contests/abc030/tasks/abc030_c
 * Result: AC
 * Execution Time: 58 ms
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
  ll n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  ll ans = 0, nowt = 0, ai = 0, bi = 0;
  bool here = true;
  while (ai < n && bi < m) {
    if (here) {
      while (ai < n && a[ai] < nowt) ++ai;
      // Debug(ai);
      if (ai >= n) break;
      nowt = a[ai] + x;
      here = false;
    }
    else {
      while (bi < m && b[bi] < nowt) ++bi;
      // Debug(bi);
      if (bi >= m) break;
      nowt = b[bi] + y;
      here = true;
      ++ans;
    }
    Debug(nowt);
  }
  cout << ans << endl;
  return 0;
}