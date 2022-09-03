/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/34576875
 * Submitted at: 2022-09-03 22:42:31
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_b
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
  string _s;
  cin >> _s;
  vector<bool> s(10);
  rep(i, 10) s[i] = _s[i] == '0';
  vector<bool> row(7);
  row[0] = s[6];
  row[1] = s[3];
  row[2] = s[1] && s[7];
  row[3] = s[0] && s[4];
  row[4] = s[2] && s[8];
  row[5] = s[5];
  row[6] = s[9];
  bool chk = false;
  if (s[0]) {
    for (int i = 0; i < 7; i++) {
      for (int j = i + 1; j < 7; j++) {
        for (int k = i + 1; k < j; k++) {
          if (!row[i] && !row[j] && row[k]) chk = true;
        }
      }
    }
  }
  puts(chk ? "Yes" : "No");
  return 0;
}