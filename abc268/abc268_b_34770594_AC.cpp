/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc268/submissions/34770594
 * Submitted at: 2022-09-11 10:14:33
 * Problem URL: https://atcoder.jp/contests/abc268/tasks/abc268_b
 * Result: AC
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  rep(i, t.size() + 1) {
    if (s == t.substr(0, i)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}