/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/34540517
 * Submitted at: 2022-09-03 21:12:49
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_b
 * Result: WA
 * Execution Time: 12 ms
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
  bool chk = false;
  if (s[0]) {
    if (s[3]) {
      if (!s[6] && (!s[1] || !s[2] || !s[4] || !s[5] || !s[7] || !s[8] || !s[9])) chk = true;
    }
    if (s[1] || s[7]) {
      if ((!s[6] || !s[3]) && (!s[2] || !s[4] || !s[5] || !s[8] || !s[9])) chk = true;
    }
    if (s[4]) {
      if ((!s[6] || !s[3] || !s[1] || !s[7]) && (!s[2] || !s[5] || !s[8] || !s[9])) chk = true;
    }
    if (s[2] || s[8]) {
      if ((!s[6] || !s[3] || !s[1] || !s[7] || !s[4]) && (!s[5] || !s[9])) chk = true;
    }
    if (s[5]) {
      if ((!s[6] || !s[3] || !s[1] || !s[7] || !s[4] || !s[2] || !s[8]) && (!s[9])) chk = true;
    }
  }
  puts(chk ? "Yes" : "No");
  return 0;
}