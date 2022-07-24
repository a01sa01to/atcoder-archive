/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc017/submissions/33502114
 * Submitted at: 2022-07-25 00:10:56
 * Problem URL: https://atcoder.jp/contests/arc017/tasks/arc017_2
 * Result: AC
 * Execution Time: 77 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> del(n - 1);
  rep(i, n - 1) del[i] = (a[i + 1] > a[i]);
  vector<int> sum(n, 0);
  rep(i, n - 1) sum[i + 1] = sum[i] + del[i];
  int ans = 0;
  Debug(sum);
  rep(i, n + 1) {
    if (i - k < 0) continue;
    Debug(i - 1, i - k, sum[i - 1], sum[i - k]);
    if (sum[i - 1] - sum[i - k] == k - 1) ans++;
  }
  cout << ans << endl;
  return 0;
}