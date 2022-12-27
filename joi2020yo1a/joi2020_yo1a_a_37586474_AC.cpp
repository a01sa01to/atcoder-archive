/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2020yo1a/submissions/37586474
 * Submitted at: 2022-12-28 00:12:32
 * Problem URL: https://atcoder.jp/contests/joi2020yo1a/tasks/joi2020_yo1a_a
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
  int a, b, c;
  cin >> a >> b >> c;
  array<int, 3> arr = { a, b, c };
  sort(arr.begin(), arr.end());
  cout << arr[1] << endl;
  return 0;
}