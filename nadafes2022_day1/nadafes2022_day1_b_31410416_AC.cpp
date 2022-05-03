/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nadafes2022_day1/submissions/31410416
 * Submitted at: 2022-05-03 13:33:44
 * Problem URL: https://atcoder.jp/contests/nadafes2022_day1/tasks/nadafes2022_day1_b
 * Result: AC
 * Execution Time: 9 ms
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

typedef modint998244353 mint;

int main() {
  int n, k;
  cin >> n >> k;
  vector<mint> fact(n + 1);
  fact[0] = 1;
  rep(i, n) fact[i + 1] = fact[i] * (i + 1);

  if (k <= (n - 1) / 2) {
    cout << 0 << endl;
  }
  else {
    int tmp = (n + 1) / 2;
    n /= 2;
    k -= tmp;
    Debug(n, k);
    cout << (fact[n] / fact[k] / fact[n - k]).val() << endl;
  }
  return 0;
}