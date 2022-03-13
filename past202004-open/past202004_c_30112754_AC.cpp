/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/30112754
 * Submitted at: 2022-03-14 00:08:59
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_c
 * Result: AC
 * Execution Time: 10 ms
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
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  for (int i = n - 2; i >= 0; --i) {
    for (int j = 1; j <= 2 * n - 3; ++j) {
      if (s[i][j] == '#' && s[i][j] != 'X') {
        bool flag = false;
        flag |= s[i + 1][j - 1] == 'X';
        flag |= s[i + 1][j] == 'X';
        flag |= s[i + 1][j + 1] == 'X';
        if (flag) s[i][j] = 'X';
      }
    }
  }
  rep(i, n) cout << s[i] << endl;
  return 0;
}