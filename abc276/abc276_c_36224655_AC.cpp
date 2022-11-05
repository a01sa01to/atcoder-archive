/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36224655
 * Submitted at: 2022-11-05 21:02:48
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_c
 * Result: AC
 * Execution Time: 7 ms
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
  prev_permutation(a.begin(), a.end());
  rep(i, n) cout << a[i] << " ";
  cout << endl;
  return 0;
}