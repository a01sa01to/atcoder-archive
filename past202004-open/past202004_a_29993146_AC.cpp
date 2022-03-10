/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/29993146
 * Submitted at: 2022-03-11 00:19:47
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  int a, b;

  if (s[0] == 'B') a = -(s[1] - '0');
  else
    a = s[0] - '0';

  if (t[0] == 'B') b = -(t[1] - '0');
  else
    b = t[0] - '0';

  if (a * b < 0) cout << abs(a - b) - 1 << endl;
  else
    cout << abs(a - b) << endl;
  return 0;
}