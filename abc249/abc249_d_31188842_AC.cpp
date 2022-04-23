/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31188842
 * Submitted at: 2022-04-23 21:25:23
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_d
 * Result: AC
 * Execution Time: 56 ms
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
  const int INF = 2e5;
  vector<ll> cnt(INF + 1, 0);
  rep(i, n) {
    cin >> a[i];
    cnt[a[i]]++;
  }
  vector<pair<ll, ll>> checked(INF + 1, { 0, 0 });
  rep(i, n) {
    checked[a[i]].second++;
    if (checked[a[i]].first) continue;
    for (int j = 1; a[i] * j <= INF; ++j) {
      checked[a[i]].first += cnt[a[i] * j] * cnt[j];
    }
  }
  ll ans = 0;
  rep(i, INF + 1) {
    ans += checked[i].first * checked[i].second;
  }
  cout << ans << endl;
  return 0;
}