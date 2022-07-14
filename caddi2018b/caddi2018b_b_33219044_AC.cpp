/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/caddi2018b/submissions/33219044
 * Submitted at: 2022-07-14 18:31:00
 * Problem URL: https://atcoder.jp/contests/caddi2018b/tasks/caddi2018b_b
 * Result: AC
 * Execution Time: 11 ms
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
  int n, h, w;
  cin >> n >> h >> w;
  int ans = 0;
  while (n--) {
    int a, b;
    cin >> a >> b;
    if (a >= h && b >= w) ans++;
  }
  cout << ans << endl;
  return 0;
}