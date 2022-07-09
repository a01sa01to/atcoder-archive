/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc166/submissions/33130575
 * Submitted at: 2022-07-10 00:26:20
 * Problem URL: https://atcoder.jp/contests/abc166/tasks/abc166_e
 * Result: AC
 * Execution Time: 208 ms
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
  rep(i, n) cin >> a[i];
  map<int, int> mp;
  rep(i, n) mp[a[i] + i]++;
  ll ans = 0;
  rep(i, n) {
    int t = i - a[i];
    ans += mp[t];
  }
  cout << ans << endl;
  return 0;
}