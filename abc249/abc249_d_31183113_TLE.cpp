/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31183113
 * Submitted at: 2022-04-23 21:15:56
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_d
 * Result: TLE
 * Execution Time: 2206 ms
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
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> cnt;
  const int INF = 2e5;
  rep(i, n) {
    cin >> a[i];
    cnt[a[i]]++;
  }
  ll ans = 0;
  rep(i, n) {
    for (int j = 1; a[i] * j <= INF; ++j) {
      ans += cnt[a[i] * j] * cnt[j];
    }
  }
  cout << ans << endl;
  return 0;
}