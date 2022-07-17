/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/33326379
 * Submitted at: 2022-07-18 00:41:53
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_e
 * Result: AC
 * Execution Time: 77 ms
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
  vector<int> c(9);
  rep(i, 9) cin >> c[i];
  ll minim = *min_element(c.begin(), c.end());
  int len = n / minim;
  string ans = "";
  rep(dig, len) {
    for (int i = 9; i > 0; i--) {
      int rem = len - dig - 1;
      if (rem * minim + c[i-1] <= n) {
        ans += to_string(i);
        n -= c[i-1];
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}