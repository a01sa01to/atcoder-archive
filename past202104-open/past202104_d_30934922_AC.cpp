/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/30934922
 * Submitted at: 2022-04-13 00:20:46
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_d
 * Result: AC
 * Execution Time: 865 ms
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
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll sum = 0;
  rep(i, k) sum += a[i];
  cout << sum << endl;
  rep(i, n - k) {
    sum -= a[i];
    sum += a[i + k];
    cout << sum << endl;
  }
  return 0;
}