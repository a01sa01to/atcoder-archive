/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2017-beginner/submissions/29187336
 * Submitted at: 2022-02-10 00:53:29
 * Problem URL: https://atcoder.jp/contests/tenka1-2017-beginner/tasks/tenka1_2017_c
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
  ll N;
  cin >> N;
  for (ll h = 1; h <= 3500; ++h)
    for (ll w = 1; w <= 3500; ++w) {
      ll bunsi = N * h * w;
      ll bunbo = 4 * h * w - (w + h) * N;
      if (bunbo > 0 && bunsi % bunbo == 0) {
        ll n = bunsi / bunbo;
        printf("%lld %lld %lld\n", h, n, w);
        return 0;
      }
    }
  return 0;
}