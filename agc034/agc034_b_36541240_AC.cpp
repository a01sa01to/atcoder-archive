/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc034/submissions/36541240
 * Submitted at: 2022-11-17 00:35:39
 * Problem URL: https://atcoder.jp/contests/agc034/tasks/agc034_b
 * Result: AC
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
  string s;
  cin >> s;
  ll ans = 0, tmp = 0;
  rep(i, s.size()) {
    bool flg = false;
    if (s[i] == 'A') {
      flg = true;
      tmp++;
    }
    else if (s[i] == 'B') {
      if (i + 1 < s.size() && s[i + 1] == 'C') {
        flg = true;
        ans += tmp;
        i++;
      }
    }
    if (!flg) tmp = 0;
  }
  cout << ans << endl;
  return 0;
}