/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-qualc/submissions/34106689
 * Submitted at: 2022-08-17 18:11:56
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-qualc/tasks/codefestival_2016_qualC_a
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
  string s;
  cin >> s;
  bool c = false, f = false;
  rep(i, s.size()) {
    if (s[i] == 'C') c = true;
    if (s[i] == 'F' && c) f = true;
  }
  puts(f ? "Yes" : "No");
  return 0;
}