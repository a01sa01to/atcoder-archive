/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc151/submissions/35739515
 * Submitted at: 2022-10-17 01:55:22
 * Problem URL: https://atcoder.jp/contests/arc151/tasks/arc151_a
 * Result: AC
 * Execution Time: 19 ms
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
  string s, t;
  cin >> n >> s >> t;
  int diff = 0;
  rep(i, n) {
    if (s[i] != t[i]) diff++;
  }
  if (diff % 2 == 1) {
    cout << -1 << endl;
    return 0;
  }
  string ans = "";
  int x = diff / 2, y = diff / 2;
  rep(i, n) {
    if (s[i] == t[i]) {
      ans.push_back('0');
    }
    else {
      if (s[i] == '1' && x > 0) {
        ans.push_back('0');
        x--;
      }
      else if (t[i] == '1' && y > 0) {
        ans.push_back('0');
        y--;
      }
      else {
        if (s[i] == '0' && x > 0) {
          ans.push_back('1');
          x--;
        }
        else if (t[i] == '0' && y > 0) {
          ans.push_back('1');
          y--;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}