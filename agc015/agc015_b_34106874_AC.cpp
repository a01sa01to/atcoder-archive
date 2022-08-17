/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc015/submissions/34106874
 * Submitted at: 2022-08-17 18:21:29
 * Problem URL: https://atcoder.jp/contests/agc015/tasks/agc015_b
 * Result: AC
 * Execution Time: 9 ms
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
  ll ans = 0;
  rep(i, s.size()) {
    int up = s.size() - i - 1;
    if (s[i] == 'U') {
      ans += up;
      ans += i * 2;
    }
    else {
      ans += up * 2;
      ans += i;
    }
  }
  cout << ans << endl;
  return 0;
}