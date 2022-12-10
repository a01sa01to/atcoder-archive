/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37147401
 * Submitted at: 2022-12-10 21:10:18
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_b
 * Result: AC
 * Execution Time: 10 ms
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
  bool ok = s.size() == 8;
  Debug(s.size(), ok);
  ok &= bool(isupper(s[0]));
  Debug(s[0], ok, isupper(s[0]));
  ok &= bool((s[1] != '0'));
  Debug(s[1], ok);
  rep(i, 6) {
    ok &= isdigit(s[i + 1]);
    Debug(s[i + 1], ok);
  }
  ok &= bool(isupper(s.back()));
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}