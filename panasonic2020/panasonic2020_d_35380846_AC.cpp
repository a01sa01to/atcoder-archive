/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/35380846
 * Submitted at: 2022-10-04 00:11:35
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_d
 * Result: AC
 * Execution Time: 180 ms
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

void dfs(string s, char c, int n) {
  if (n == 0) {
    cout << s << endl;
    return;
  }
  for (char i = 'a'; i <= c; i++) {
    char nxtMx = c + (c == i);
    dfs(s + i, nxtMx, n - 1);
  }
}

int main() {
  int n;
  cin >> n;
  dfs("", 'a', n);
  return 0;
}