/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/36131365
 * Submitted at: 2022-11-01 14:19:38
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_f
 * Result: AC
 * Execution Time: 33 ms
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
  int ans = 0;
  int prev = 0;
  rep(i, n) {
    if (a[i] > prev) {
      ans++;
      prev = a[i];
    }
  }
  cout << ans << endl;
  return 0;
}