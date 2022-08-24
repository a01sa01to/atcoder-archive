/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc058/submissions/34316047
 * Submitted at: 2022-08-25 00:23:04
 * Problem URL: https://atcoder.jp/contests/arc058/tasks/arc058_a
 * Result: AC
 * Execution Time: 13 ms
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
  int n, k;
  cin >> n >> k;
  vector<bool> d(10);
  rep(i, k) {
    int x;
    cin >> x;
    d[x] = true;
  }
  while (true) {
    string s = to_string(n);
    bool chk = true;
    for (char c : s) {
      if (d[c - '0']) chk = false;
    }
    if (chk) {
      cout << s << endl;
      break;
    }
    n++;
  }
  return 0;
}