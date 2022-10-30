/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc015/submissions/36087165
 * Submitted at: 2022-10-30 15:02:55
 * Problem URL: https://atcoder.jp/contests/ahc015/tasks/ahc015_a
 * Result: AC
 * Execution Time: 14 ms
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
  constexpr int n = 100;
  vector<int> flavor(n);
  rep(i, n) cin >> flavor[i];
  rep(_, n) {
    int x;
    cin >> x;
    cout << "R" << endl;
  }
  return 0;
}