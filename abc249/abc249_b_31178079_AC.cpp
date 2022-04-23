/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31178079
 * Submitted at: 2022-04-23 21:09:27
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_b
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  bool up = false, lo = false;
  map<char, bool> m;
  rep(i, s.size()) {
    if (m[s[i]]) {
      cout << "No" << endl;
      return 0;
    }
    if (isupper(s[i])) {
      up = true;
      m[s[i]] = true;
    }
    if (islower(s[i])) {
      lo = true;
      m[s[i]] = true;
    }
  }
  cout << (up && lo ? "Yes" : "No") << endl;
  return 0;
}