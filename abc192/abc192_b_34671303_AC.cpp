/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/34671303
 * Submitted at: 2022-09-07 18:11:21
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_b
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
  bool flag = true;
  rep(i, s.size()) {
    if (i % 2 == 0 && isupper(s[i])) flag = false;
    if (i % 2 == 1 && islower(s[i])) flag = false;
  }
  puts(flag ? "Yes" : "No");
  return 0;
}