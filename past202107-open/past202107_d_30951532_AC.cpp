/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202107-open/submissions/30951532
 * Submitted at: 2022-04-14 00:04:43
 * Problem URL: https://atcoder.jp/contests/past202107-open/tasks/past202107_d
 * Result: AC
 * Execution Time: 29 ms
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
  string s;
  cin >> n >> s;

  const vector<string> chk = { "axa", "ixi", "uxu", "exe", "oxo" };
  rep(i, n - 2) {
    rep(j, 5) {
      if (s.substr(i, 3) == chk[j]) {
        rep(k, 3) s[i + k] = '.';
      }
    }
  }

  cout << s << endl;
  return 0;
}