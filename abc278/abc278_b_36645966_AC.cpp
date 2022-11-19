/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36645966
 * Submitted at: 2022-11-19 22:55:12
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_b
 * Result: AC
 * Execution Time: 8 ms
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

inline string pad(string s, int n) {
  while (s.size() < n) s = "0" + s;
  return s;
}

inline bool valid(string s) {
  int h = (s[0] - '0') * 10 + (s[1] - '0');
  int m = (s[3] - '0') * 10 + (s[4] - '0');
  if (0 <= h && h <= 23 && 0 <= m && m <= 59) return true;
  return false;
}

int main() {
  int h, m;
  cin >> h >> m;
  for (int i = h; i <= 23; i++) {
    for (int j = (i > h ? 0 : m); j < 60; j++) {
      string s = pad(to_string(i), 2) + " " + pad(to_string(j), 2);
      Debug(s);
      swap(s[1], s[3]);
      Debug(s);
      if (valid(s)) {
        swap(s[1], s[3]);
        cout << s << endl;
        return 0;
      }
    }
  }
  cout << "00 00" << endl;
  return 0;
}