/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc039/submissions/33392998
 * Submitted at: 2022-07-21 18:37:16
 * Problem URL: https://atcoder.jp/contests/agc039/tasks/agc039_a
 * Result: WA
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
  string s;
  ll k;
  cin >> s >> k;
  int ans = 0;
  rep(i, s.size() - 1) {
    if (s[i] == s[i + 1]) {
      ans++;
      s[i + 1] = '?';
    }
  }
  cout << k * ans + (k - 1) * (s.front() == s.back()) << endl;
  return 0;
}