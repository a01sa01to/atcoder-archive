/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc160/submissions/34823917
 * Submitted at: 2022-09-13 00:02:38
 * Problem URL: https://atcoder.jp/contests/abc160/tasks/abc160_d
 * Result: AC
 * Execution Time: 21 ms
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
  int n, x, y;
  cin >> n >> x >> y;
  --x, --y;
  vector<int> ans(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int d = abs(j - i);
      d = min(d, abs(x - i) + 1 + abs(j - y));
      d = min(d, abs(y - i) + 1 + abs(j - x));
      ans[d]++;
    }
  }
  for (int i = 1; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}