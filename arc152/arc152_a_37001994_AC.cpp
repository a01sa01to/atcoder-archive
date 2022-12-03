/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc152/submissions/37001994
 * Submitted at: 2022-12-04 00:22:05
 * Problem URL: https://atcoder.jp/contests/arc152/tasks/arc152_a
 * Result: AC
 * Execution Time: 35 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int sum = 0;
  rep(i, n) {
    if (a[i] == 2 && l - sum < a[i]) {
      cout << "No" << endl;
      return 0;
    }
    sum += a[i] + 1;
  }
  cout << "Yes" << endl;
  return 0;
}