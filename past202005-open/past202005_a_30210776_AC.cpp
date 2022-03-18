/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202005-open/submissions/30210776
 * Submitted at: 2022-03-19 00:09:01
 * Problem URL: https://atcoder.jp/contests/past202005-open/tasks/past202005_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  if (s == t) {
    puts("same");
    return 0;
  }
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  transform(t.begin(), t.end(), t.begin(), ::tolower);
  if (s == t) puts("case-insensitive");
  else
    puts("different");
  return 0;
}