/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2008ho/submissions/37117239
 * Submitted at: 2022-12-10 00:15:38
 * Problem URL: https://atcoder.jp/contests/joi2008ho/tasks/joi2008ho_c
 * Result: AC
 * Execution Time: 100 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> p(n + 1, 0);
  rep(i, n) cin >> p[i];
  vector<int> list(0);
  rep(i, n + 1) rep(j, n + 1) {
    list.push_back(p[i] + p[j]);
  }
  sort(list.begin(), list.end());
  list.erase(unique(list.begin(), list.end()), list.end());
  int ans = 0;
  rep(i, list.size()) {
    auto it = upper_bound(list.begin(), list.end(), m - list[i]);
    if (it == list.begin()) continue;
    it--;
    ans = max(ans, list[i] + *it);
  }
  cout << ans << endl;
  return 0;
}