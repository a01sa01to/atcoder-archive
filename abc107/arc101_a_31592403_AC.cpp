/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc107/submissions/31592403
 * Submitted at: 2022-05-11 00:28:29
 * Problem URL: https://atcoder.jp/contests/abc107/tasks/arc101_a
 * Result: AC
 * Execution Time: 44 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  x.push_back(0);
  sort(x.begin(), x.end());
  int ans = 1e9;
  rep(i, n) {
    if (i + k > n) break;
    ans = min(ans, min(abs(x[i]), abs(x[i + k])) + abs(x[i + k] - x[i]));
  }
  cout << ans << endl;
  return 0;
}