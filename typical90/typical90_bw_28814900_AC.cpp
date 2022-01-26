/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28814900
 * Submitted at: 2022-01-27 00:25:02
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bw
 * Result: AC
 * Execution Time: 18 ms
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

ll ceil_log_2(ll n) {
  ll ret = 0, tmp = 1;
  while (tmp < n) {
    tmp *= 2;
    ++ret;
  }
  return ret;
}

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      ++ans;
      n /= i;
    }
  }
  if (n != 1) ++ans;
  cout << ceil_log_2(ans) << endl;
  return 0;
}