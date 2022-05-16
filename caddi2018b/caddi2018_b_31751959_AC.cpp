/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/caddi2018b/submissions/31751959
 * Submitted at: 2022-05-17 00:21:44
 * Problem URL: https://atcoder.jp/contests/caddi2018b/tasks/caddi2018_b
 * Result: AC
 * Execution Time: 39 ms
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
  bool chk = true;
  rep(i, n) chk &= (a[i] % 2 == 0);
  cout << (chk ? "second" : "first") << endl;
  return 0;
}