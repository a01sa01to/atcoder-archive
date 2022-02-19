/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29430022
 * Submitted at: 2022-02-19 21:03:27
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_b
 * Result: AC
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll x;
  cin >> x;
  if (x % 10) cout << x / 10 - (x < 0) << endl;
  else
    cout << x / 10 << endl;
  return 0;
}