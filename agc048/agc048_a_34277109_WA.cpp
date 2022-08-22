/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc048/submissions/34277109
 * Submitted at: 2022-08-23 00:33:51
 * Problem URL: https://atcoder.jp/contests/agc048/tasks/agc048_a
 * Result: WA
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
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    if (s[0] != 'a') {
      cout << 0 << endl;
      continue;
    }
    bool op = false;
    rep(i, s.size()) {
      if (s[i] != 'a') {
        if (s[i] > 't') {
          cout << i - 1 << endl;
        }
        else {
          cout << i << endl;
        }
        op = true;
        break;
      }
    }
    if (!op) cout << -1 << endl;
  }
  return 0;
}