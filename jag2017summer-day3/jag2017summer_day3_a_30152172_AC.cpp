/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jag2017summer-day3/submissions/30152172
 * Submitted at: 2022-03-15 23:22:10
 * Problem URL: https://atcoder.jp/contests/jag2017summer-day3/tasks/jag2017summer_day3_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int d = 0;
  rep(i, s.size()) {
    if (s[i] == '(')
      ++d;
    else if (s[i] == ')')
      --d;
    else {
      cout << d << endl;
      return 0;
    }
  }
  return 0;
}