/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc046/submissions/37681655
 * Submitted at: 2023-01-02 00:00:42
 * Problem URL: https://atcoder.jp/contests/abc046/tasks/arc062_b
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
  int ans = 0;
  rep(i, s.size()) {
    ans += (s[i] == 'g' ? 1 : -1);
  }
  cout << ans / 2 << endl;
  return 0;
}