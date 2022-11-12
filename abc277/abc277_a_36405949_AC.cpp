/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36405949
 * Submitted at: 2022-11-12 21:00:49
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_a
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
  int n, x;
  cin >> n >> x;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  rep(i, n) {
    if (p[i] == x) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}