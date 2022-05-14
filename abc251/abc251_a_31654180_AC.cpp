/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31654180
 * Submitted at: 2022-05-14 21:00:44
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_a
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  rep(_, 6 / s.size()) {
    cout << s;
  }
  cout << endl;
  return 0;
}