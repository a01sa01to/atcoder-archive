/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34923789
 * Submitted at: 2022-09-17 21:04:56
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_b
 * Result: AC
 * Execution Time: 9 ms
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
  constexpr int n = 10;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  int x = -1;
  bool f = false;
  rep(i, n) {
    if (!f && s[i].find('#') != string::npos) {
      cout << i + 1 << " ";
      x = i;
      f = true;
    }
    if (f && s[i].find('#') == string::npos) {
      cout << i << endl;
      f = false;
      break;
    }
  }
  if (f) cout << n << endl;
  f = false;
  rep(i, n) {
    if (!f && s[x][i] == '#') {
      cout << i + 1 << " ";
      f = true;
    }
    if (f && s[x][i] == '.') {
      cout << i << endl;
      f = false;
      break;
    }
  }
  if (f) cout << n << endl;

  return 0;
}