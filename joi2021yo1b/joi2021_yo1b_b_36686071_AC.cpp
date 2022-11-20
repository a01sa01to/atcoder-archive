/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2021yo1b/submissions/36686071
 * Submitted at: 2022-11-21 00:47:45
 * Problem URL: https://atcoder.jp/contests/joi2021yo1b/tasks/joi2021_yo1b_b
 * Result: AC
 * Execution Time: 7 ms
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
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (s[i] == 'I' && s[j] == 'O' && s[k] == 'I') {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}