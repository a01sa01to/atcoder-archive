/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29084224
 * Submitted at: 2022-02-05 21:33:50
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_d
 * Result: WA
 * Execution Time: 245 ms
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
  int t;
  cin >> t;
  rep(_, t) {
    ll a, s;
    cin >> a >> s;
    if (a * 2 > s) {
      cout << "No" << endl;
      continue;
    }
    ll y = a;
    rep(i, 60) {
      if (a | y != s - y) {
        y += 1LL << i;
      }
      else {
        break;
      }
    }
    if (a | y == s - y) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}