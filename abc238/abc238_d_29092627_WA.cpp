/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29092627
 * Submitted at: 2022-02-05 22:03:17
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_d
 * Result: WA
 * Execution Time: 244 ms
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
    }
    else{
      cout << "Yes" << endl;
    }
  }
  return 0;
}