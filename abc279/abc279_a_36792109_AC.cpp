/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36792109
 * Submitted at: 2022-11-26 21:01:04
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_a
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
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.size()) {
    if (s[i] == 'v') ans++;
    if (s[i] == 'w') ans += 2;
  }
  cout << ans << endl;
  return 0;
}