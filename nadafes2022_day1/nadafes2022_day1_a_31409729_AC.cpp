/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nadafes2022_day1/submissions/31409729
 * Submitted at: 2022-05-03 13:06:44
 * Problem URL: https://atcoder.jp/contests/nadafes2022_day1/tasks/nadafes2022_day1_a
 * Result: AC
 * Execution Time: 6 ms
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
  ll n;
  cin >> n;
  cout << n * (n - 1) / 2 - (n & 1) << endl;
  return 0;
}