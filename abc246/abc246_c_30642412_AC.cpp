/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30642412
 * Submitted at: 2022-04-02 21:22:58
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_c
 * Result: AC
 * Execution Time: 91 ms
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
  ll n, k, x;
  cin >> n >> k >> x;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.rbegin(), a.rend());
  rep(i, n) {
    if (k > 0) {
      ll m = a[i] / x;
      a[i] -= x * min(k, m);
      k -= m;
    }
  }
  Debug(a);
  sort(a.rbegin(), a.rend());
  rep(i, n) {
    if (k > 0) {
      a[i] = 0;
      --k;
    }
  }
  cout << accumulate(a.begin(), a.end(), 0LL) << endl;
  return 0;
}