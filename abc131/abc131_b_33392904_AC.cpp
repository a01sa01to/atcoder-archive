/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/33392904
 * Submitted at: 2022-07-21 18:30:23
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_b
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
  int n, l;
  cin >> n >> l;
  int r = l + n - 1;
  int sum = n * l + (n * (n - 1)) / 2;
  if (r < 0) {
    cout << sum - r << endl;
  }
  else if (l > 0) {
    cout << sum - l << endl;
  }
  else {
    cout << sum << endl;
  }
  return 0;
}