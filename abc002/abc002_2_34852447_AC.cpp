/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc002/submissions/34852447
 * Submitted at: 2022-09-14 18:12:38
 * Problem URL: https://atcoder.jp/contests/abc002/tasks/abc002_2
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
  string w;
  cin >> w;
  rep(i, w.size()) {
    if (w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o') continue;
    cout << w[i];
  }
  cout << endl;
  return 0;
}