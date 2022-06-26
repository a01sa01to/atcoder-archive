/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc105/submissions/32783954
 * Submitted at: 2022-06-27 00:00:05
 * Problem URL: https://atcoder.jp/contests/abc105/tasks/abc105_c
 * Result: AC
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }
  string ans = "";
  while (n) {
    if (n % 2 == 0) {
      ans += "0";
    }
    else {
      ans += "1";
      n--;
    }
    n /= -2;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}