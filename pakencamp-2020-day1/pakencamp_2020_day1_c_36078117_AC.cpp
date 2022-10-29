/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2020-day1/submissions/36078117
 * Submitted at: 2022-10-30 00:42:59
 * Problem URL: https://atcoder.jp/contests/pakencamp-2020-day1/tasks/pakencamp_2020_day1_c
 * Result: AC
 * Execution Time: 11 ms
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
  map<string, int> mp;
  rep(i, n) {
    int k;
    cin >> k;
    rep(j, k) {
      string s;
      cin >> s;
      mp[s]++;
    }
  }
  int ans = 0;
  for (auto [k, v] : mp) {
    if (v == n) ans++;
  }
  cout << ans << endl;
  return 0;
}