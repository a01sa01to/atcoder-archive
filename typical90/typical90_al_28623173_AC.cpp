/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28623173
 * Submitted at: 2022-01-19 00:13:12
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_al
 * Result: AC
 * Execution Time: 12 ms
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
  ll a, b;
  cin >> a >> b;
  ll g = gcd(a, b);
  const ll inf = 1e18;
  if (a / g > inf / b) cout << "Large" << endl;
  else
    cout << a / g * b << endl;
  return 0;
}