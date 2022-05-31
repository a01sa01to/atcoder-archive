/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/32133448
 * Submitted at: 2022-06-01 00:08:02
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ad
 * Result: AC
 * Execution Time: 212 ms
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
  vector<int> cnt(n + 1, 0);
  for (int i = 2; i <= n; i++) {
    if (cnt[i] == 0) {
      cnt[i]++;
      for (int j = 2 * i; j <= n; j += i) {
        cnt[j]++;
      }
    }
  }
  int ans = 0;
  rep(i, n + 1) {
    if (cnt[i] >= k) ans++;
  }
  cout << ans << endl;
  return 0;
}