/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc004/submissions/33415086
 * Submitted at: 2022-07-23 00:15:50
 * Problem URL: https://atcoder.jp/contests/arc004/tasks/arc004_2
 * Result: AC
 * Execution Time: 8 ms
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
  int sum = accumulate(a.begin(), a.end(), 0);
  int maxim = *max_element(a.begin(), a.end());
  cout << sum << endl;
  cout << max(0, maxim - (sum - maxim)) << endl;
  return 0;
}