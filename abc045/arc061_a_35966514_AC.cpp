/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc045/submissions/35966514
 * Submitted at: 2022-10-26 00:32:18
 * Problem URL: https://atcoder.jp/contests/abc045/tasks/arc061_a
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  ll sum = 0;
  rep(bit, 1 << (s.size() - 1)) {
    string t = "";
    rep(i, s.size()) {
      t += s[i];
      if (bit & (1 << i)) {
        sum += stoll(t == "" ? "0" : t);
        t = "";
      }
    }
    sum += stoll(t == "" ? "0" : t);
  }
  cout << sum << endl;
  return 0;
}