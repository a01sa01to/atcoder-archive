/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc140/submissions/37290765
 * Submitted at: 2022-12-16 01:14:07
 * Problem URL: https://atcoder.jp/contests/arc140/tasks/arc140_b
 * Result: AC
 * Execution Time: 13 ms
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
  string s;
  cin >> n >> s;
  int ans = 0, cnt = 0;
  rep(i, n) {
    if (s[i] == 'R') {
      int l = 0, r = 0;
      while (i - l - 1 >= 0 && s[i - l - 1] == 'A') l++;
      while (i + r + 1 < n && s[i + r + 1] == 'C') r++;
      cnt += min(l, r);
      if (l > 0 && r > 0) ans++;
    }
  }
  cout << min(2 * ans, cnt) << endl;
  return 0;
}