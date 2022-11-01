/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/36131409
 * Submitted at: 2022-11-01 14:22:05
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_g
 * Result: AC
 * Execution Time: 42 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  string s = "";
  rep(i, n) s += to_string(a[i]);
  mint ans = 0;
  rep(i, s.size()) {
    ans *= 10;
    ans += s[i] - '0';
  }
  cout << ans.val() << endl;
  return 0;
}