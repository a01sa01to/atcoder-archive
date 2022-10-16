/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1a/submissions/35712056
 * Submitted at: 2022-10-16 14:37:40
 * Problem URL: https://atcoder.jp/contests/joi2023yo1a/tasks/joi2023_yo1a_c
 * Result: AC
 * Execution Time: 5 ms
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
  int now = 1;
  int ans = 0;
  rep(i, n) {
    if (s[i] == 'L') {
      now = max(1, now - 1);
    }
    else {
      now = min(3, now + 1);
      if (now == 3) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}