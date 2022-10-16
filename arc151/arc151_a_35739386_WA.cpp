/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc151/submissions/35739386
 * Submitted at: 2022-10-17 01:41:22
 * Problem URL: https://atcoder.jp/contests/arc151/tasks/arc151_a
 * Result: WA
 * Execution Time: 20 ms
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
  rep(i, n) {
    if (s[i] == t[i]) {
      ans.push_back(s[i]);
    }
    else {
      if (diff % 2 == 0) {
        ans.push_back(s[i]);
      }
      else {
        ans.push_back(t[i]);
      }
      diff--;
    }
  }
  cout << ans << endl;
  return 0;
}