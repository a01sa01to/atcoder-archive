/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/apc001/submissions/36776704
 * Submitted at: 2022-11-26 00:14:54
 * Problem URL: https://atcoder.jp/contests/apc001/tasks/apc001_c
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool isMale(int n) {
  cout << n << endl;
  string s;
  cin >> s;
  if (s == "Vacant") { exit(0); }
  return (s == "Male");
}

int main() {
  int n;
  cin >> n;
  int l = 0;
  bool lm = isMale(l);
  int r = n - 1;
  bool rm = isMale(r);
  while (r - l > 1) {
    int m = (l + r) / 2;
    bool mm = isMale(m);
    if (((m - l) % 2 == 0) ^ (lm == mm)) {
      r = m;
      rm = mm;
    }
    else if (((r - m) % 2 == 0) ^ (rm == mm)) {
      l = m;
      lm = mm;
    }
    else {
      assert(false);
    }
  }
  return 0;
}