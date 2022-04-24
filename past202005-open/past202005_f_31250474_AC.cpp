/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202005-open/submissions/31250474
 * Submitted at: 2022-04-25 00:36:31
 * Problem URL: https://atcoder.jp/contests/past202005-open/tasks/past202005_f
 * Result: AC
 * Execution Time: 17 ms
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
  vector<set<char>> s(n);
  rep(i, n) {
    string t;
    cin >> t;
    rep(j, n) {
      s[i].insert(t[j]);
    }
  }
  string ans = "";
  rep(i, n) {
    if (i >= (n + 1) / 2) {
      ans += ans[n - i - 1];
    }
    else {
      bool chk = false;
      for (char c : s[i]) {
        if (s[n - i - 1].count(c)) {
          ans += c;
          chk = true;
          break;
        }
      }
      if (!chk) {
        cout << -1 << endl;
        return 0;
      }
    }
  }
  cout << ans << endl;
  return 0;
}