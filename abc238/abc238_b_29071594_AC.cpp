/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29071594
 * Submitted at: 2022-02-05 21:08:08
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_b
 * Result: AC
 * Execution Time: 8 ms
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
  vector<int> a(n), sum(n + 1);
  rep(i, n) cin >> a[i];
  rep(i, n) sum[i + 1] = (sum[i] + a[i]) % 360;
  sum.push_back(360);
  sort(sum.begin(), sum.end());
  int ans = 0;
  rep(i, n + 1) {
    ans = max(ans, sum[i + 1] - sum[i]);
  }
  cout << ans << endl;
  return 0;
}