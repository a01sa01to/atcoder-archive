/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36221132
 * Submitted at: 2022-11-05 21:00:42
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_a
 * Result: AC
 * Execution Time: 4 ms
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
  int ans = -1;
  rep(i, s.size()) if (s[i] == 'a') ans = i + 1;
  cout << ans << endl;
  return 0;
}