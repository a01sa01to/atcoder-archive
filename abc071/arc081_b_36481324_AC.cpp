/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc071/submissions/36481324
 * Submitted at: 2022-11-14 00:27:43
 * Problem URL: https://atcoder.jp/contests/abc071/tasks/arc081_b
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

using mint = modint1000000007;

int main() {
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  mint ans = (s[0] == t[0] ? 3 : 6);
  rep(i, n) {
    if (i == 0) continue;
    if (s[0] != t[0] && i == 1) continue;
    if (s[i] == t[i]) {
      ans *= (s[i - 1] == t[i - 1] ? 2 : 1);
    }
    else {
      ans *= (s[i - 1] == t[i - 1] ? 2 : 3);
      i++;
    }
  }
  cout << ans.val() << endl;
  return 0;
}