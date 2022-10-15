/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35669740
 * Submitted at: 2022-10-15 21:12:40
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_c
 * Result: AC
 * Execution Time: 369 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  vector<int> b = a;
  b.erase(unique(b.begin(), b.end()), b.end());
  vector<int> ans(n);
  rep(i, n) {
    auto itr = upper_bound(b.begin(), b.end(), a[i]);
    ans[distance(itr, b.end())]++;
  }
  rep(i, n) cout << ans[i] << endl;
  return 0;
}