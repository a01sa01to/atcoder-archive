/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36645167
 * Submitted at: 2022-11-19 22:48:04
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_a
 * Result: AC
 * Execution Time: 11 ms
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
  int n, k;
  cin >> n >> k;
  deque<int> a(n);
  rep(i, n) cin >> a[i];
  rep(_, k) {
    a.pop_front();
    a.push_back(0);
  }
  rep(i, n) cout << a[i] << " ";
  cout << endl;
  return 0;
}