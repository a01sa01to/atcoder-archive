/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc011/submissions/36142539
 * Submitted at: 2022-11-02 00:01:27
 * Problem URL: https://atcoder.jp/contests/agc011/tasks/agc011_b
 * Result: AC
 * Execution Time: 50 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  int tmp = 0;
  rep(i, n) if (sum[i] * 2 < a[i]) tmp = i;
  cout << n - tmp << endl;
  return 0;
}