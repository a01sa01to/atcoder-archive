/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32403881
 * Submitted at: 2022-06-11 22:08:52
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_c
 * Result: WA
 * Execution Time: 11 ms
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
  ll x, a, d, n;
  cin >> x >> a >> d >> n;
  if (n == 1) {
    cout << abs(x - a) << endl;
    return 0;
  }
  ll ok = 0, ng = n;
  if (d < 0) swap(ok, ng);
  while (abs(ng - ok) > 1) {
    ll mid = (ok + ng) / 2;
    ((a + d * mid - x) < 0 ? ok : ng) = mid;
  }
  ll ca = a + d * ok, cb = a + d * ng;
  Debug(ok, ng, ca, cb);
  cout << min(abs(ca - x), abs(cb - x)) << endl;
  return 0;
}