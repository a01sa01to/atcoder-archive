/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc040/submissions/35166347
 * Submitted at: 2022-09-26 00:22:10
 * Problem URL: https://atcoder.jp/contests/arc040/tasks/arc040_b
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
  int n, r;
  cin >> n >> r;
  string s;
  cin >> s;
  int maxim = 0;
  rep(i, s.size()) if (s[i] == '.') maxim = i;
  int ans = max(maxim - r + 1, 0);
  Debug(maxim, ans);
  rep(i, s.size()) {
    if (s[i] == '.') {
      ans++;
      rep(j, r) {
        if (i + j >= s.size()) break;
        s[i + j] = 'o';
      }
      Debug(i, s);
    }
  }
  cout << ans << endl;
  return 0;
}