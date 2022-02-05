/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29075238
 * Submitted at: 2022-02-05 21:13:15
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_c
 * Result: AC
 * Execution Time: 7 ms
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

typedef modint998244353 mint;

ll p10(int x) {
  ll res = 1;
  rep(i, x) res *= 10;
  return res;
}

int main() {
  ll n;
  cin >> n;
  mint ans = 0;
  rep(i, 18) {
    ll l = p10(i);
    ll r = p10(i + 1) - 1;
    r = min(r, n);
    if (l <= r) {
      mint c = r - l + 1;
      ans += c * (c + 1) / 2;
    }
  }
  cout << ans.val() << endl;
  return 0;
}