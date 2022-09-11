/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc148/submissions/34804265
 * Submitted at: 2022-09-12 00:02:06
 * Problem URL: https://atcoder.jp/contests/arc148/tasks/arc148_b
 * Result: AC
 * Execution Time: 30 ms
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
  cin >> n;
  string s;
  cin >> s;
  int l = 0;
  rep(i, n) {
    if (s[i] == 'p') {
      l = i;
      break;
    }
  }
  auto f = [](const string& x) {
    string ans = x;
    reverse(ans.begin(), ans.end());
    rep(i, ans.size()) {
      ans[i] = (ans[i] == 'p') ? 'd' : 'p';
    }
    return ans;
  };
  string ans = s;
  for (int r = l + 1; r <= n; r++) {
    ans = min(ans, s.substr(0, l) + f(s.substr(l, r - l)) + s.substr(r));
  }
  cout << ans << endl;
  return 0;
}