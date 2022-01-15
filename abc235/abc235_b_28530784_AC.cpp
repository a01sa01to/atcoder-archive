/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/28530784
 * Submitted at: 2022-01-15 21:04:15
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_b
 * Result: AC
 * Execution Time: 40 ms
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
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int ans = h.back();
  rep(i, n - 1) {
    if (h[i] >= h[i + 1]) {
      ans = h[i];
      break;
    }
  }
  cout << ans << endl;
  return 0;
}