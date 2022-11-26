/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36795316
 * Submitted at: 2022-11-26 21:02:27
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_b
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  if (s.find(t) != string::npos) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}