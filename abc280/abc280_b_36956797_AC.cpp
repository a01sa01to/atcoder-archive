/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36956797
 * Submitted at: 2022-12-03 21:06:16
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_b
 * Result: AC
 * Execution Time: 5 ms
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
  vector<ll> s(n + 1);
  rep(i, n) cin >> s[i + 1];
  vector<ll> ans(n, 0);
  rep(i, n) ans[i] = s[i + 1] - s[i];
  rep(i, n) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}