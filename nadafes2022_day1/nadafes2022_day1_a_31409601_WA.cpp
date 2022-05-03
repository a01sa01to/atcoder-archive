/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nadafes2022_day1/submissions/31409601
 * Submitted at: 2022-05-03 13:02:41
 * Problem URL: https://atcoder.jp/contests/nadafes2022_day1/tasks/nadafes2022_day1_a
 * Result: WA
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  if (n & 1)
    cout << n - 1 << endl;
  else
    cout << n << endl;
  return 0;
}