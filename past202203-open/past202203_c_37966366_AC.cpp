/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202203-open/submissions/37966366
 * Submitted at: 2023-01-13 00:17:40
 * Problem URL: https://atcoder.jp/contests/past202203-open/tasks/past202203_c
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
  string s;
  cin >> s;
  const string t = "abcdefghijklmnopqrstuvwxyz";
  cout << s.substr(0, (s.size() - 1) % 3 + 1) << t[(s.size() - 4) / 3] << endl;
  return 0;
}