/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/34671340
 * Submitted at: 2022-09-07 18:13:20
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_c
 * Result: AC
 * Execution Time: 41 ms
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
  int streak = 0;
  rep(i, n - 1) {
    if (a[i] >= a[i + 1]) {
      streak++;
    }
    else {
      ans = max(ans, streak);
      streak = 0;
    }
  }
  cout << max(ans, streak) << endl;
  return 0;
}