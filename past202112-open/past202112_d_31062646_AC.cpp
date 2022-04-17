/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202112-open/submissions/31062646
 * Submitted at: 2022-04-17 17:16:04
 * Problem URL: https://atcoder.jp/contests/past202112-open/tasks/past202112_d
 * Result: AC
 * Execution Time: 150 ms
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
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  vector<tuple<int, int, int>> ans(n);
  rep(i, n) {
    ans[i] = make_tuple(a[i] + b[i], a[i], -(i + 1));
  }
  sort(ans.rbegin(), ans.rend());

  for (auto [a, b, c] : ans) {
    cout << -c << " ";
  }
  cout << endl;
  return 0;
}