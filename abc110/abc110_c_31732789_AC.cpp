/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc110/submissions/31732789
 * Submitted at: 2022-05-16 00:54:20
 * Problem URL: https://atcoder.jp/contests/abc110/tasks/abc110_c
 * Result: AC
 * Execution Time: 23 ms
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
  string s, t;
  cin >> s >> t;
  map<char, char> mp1, mp2;
  rep(i, s.size()) {
    bool f1 = mp1.count(s[i]) && mp1[s[i]] != t[i];
    bool f2 = mp2.count(t[i]) && mp2[t[i]] != s[i];
    if (f1 || f2) {
      cout << "No" << endl;
      return 0;
    }
    else {
      mp1[s[i]] = t[i];
      mp2[t[i]] = s[i];
    }
  }
  cout << "Yes" << endl;
  return 0;
}