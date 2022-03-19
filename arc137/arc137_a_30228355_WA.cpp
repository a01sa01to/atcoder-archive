/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc137/submissions/30228355
 * Submitted at: 2022-03-19 21:05:19
 * Problem URL: https://atcoder.jp/contests/arc137/tasks/arc137_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll l, r;
  cin >> l >> r;
  if (l == 1) {
    cout << r - 1 << endl;
  }
  else {
    while (gcd(l, r) != 1) l++;
    cout << r - l << endl;
  }
  return 0;
}