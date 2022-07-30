/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc145/submissions/33619970
 * Submitted at: 2022-07-30 21:32:05
 * Problem URL: https://atcoder.jp/contests/arc145/tasks/arc145_a
 * Result: WA
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
  int n;
  string s;
  cin >> n >> s;
  if (s[0] == 'B') {
    puts("Yes");
  }
  else if (s.back() == 'B') {
    puts("No");
  }
  else {
    puts("Yes");
  }
  return 0;
}