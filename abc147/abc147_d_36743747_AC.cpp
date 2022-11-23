/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc147/submissions/36743747
 * Submitted at: 2022-11-24 00:07:10
 * Problem URL: https://atcoder.jp/contests/abc147/tasks/abc147_d
 * Result: AC
 * Execution Time: 198 ms
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

using mint = modint1000000007;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<pair<int, int>> cnt(60, { 0, 0 });
  rep(i, n) {
    rep(j, 60) {
      (a[i] & (1LL << j) ? cnt[j].first : cnt[j].second)++;
    }
  }
  mint ans = 0;
  rep(i, 60) {
    ans += mint(2).pow(i) * cnt[i].first * cnt[i].second;
  }
  cout << ans.val() << endl;
  return 0;
}