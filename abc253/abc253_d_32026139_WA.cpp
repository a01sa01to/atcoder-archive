/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32026139
 * Submitted at: 2022-05-28 21:33:11
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_d
 * Result: WA
 * Execution Time: 8 ms
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
  ll n, a, b;
  cin >> n >> a >> b;
  ll ac = n / a;
  ll bc = n / b;
  ll abc = n / a / b;
  if (a == b) {
    cout << n * (n + 1) / 2 - ac * (ac + 1) / 2 * a << endl;
  }
  else {
    cout << n * (n + 1) / 2 - ac * (ac + 1) / 2 * a - bc * (bc + 1) / 2 * b + abc * (abc + 1) / 2 * a * b << endl;
  }
  return 0;
}