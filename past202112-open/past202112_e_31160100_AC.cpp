/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202112-open/submissions/31160100
 * Submitted at: 2022-04-23 01:26:42
 * Problem URL: https://atcoder.jp/contests/past202112-open/tasks/past202112_e
 * Result: AC
 * Execution Time: 11 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  ll ans = 0;
  auto f = [&](int i) {
    int p = s[i - 1] - '0';
    int n = s[i] - '0';
    if (1 <= p && p <= 5) {
      return (1 <= n && n <= 5);
    }
    else {
      return !(1 <= n && n <= 5);
    }
  };
  rep(i, s.size()) {
    if (i == 0) {
      ans += 500;
    }
    else if (s[i] == s[i - 1]) {
      ans += 301;
    }
    else if (f(i)) {
      ans += 210;
    }
    else {
      ans += 100;
    }
  }
  cout << ans << endl;
  return 0;
}