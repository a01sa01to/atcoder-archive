/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28830034
 * Submitted at: 2022-01-28 00:19:42
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bx
 * Result: AC
 * Execution Time: 47 ms
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
  int n;
  cin >> n;
  vector<ll> a(n), sum(2 * n + 1, 0);
  rep(i, n) cin >> a[i];
  rep(i, 2 * n) sum[i + 1] = sum[i] + a[i % n];
  Debug(sum);
  ll i = 0, j = 1;
  while (j < 2 * n) {
    if ((sum[j] - sum[i]) * 10 == sum[n]) {
      cout << "Yes" << endl;
      return 0;
    }
    if ((sum[j] - sum[i]) * 10 < sum[n]) ++j;
    else
      ++i;
  }
  cout << "No" << endl;
  return 0;
}