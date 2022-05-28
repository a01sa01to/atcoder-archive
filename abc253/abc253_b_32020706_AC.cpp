/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32020706
 * Submitted at: 2022-05-28 21:23:55
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_b
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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  pair<int, int> a(-1, -1), b(-1, -1);
  rep(i, h) rep(j, w) {
    if (a.first == -1 && s[i][j] == 'o') {
      a = { i, j };
    }
    else if (b.first == -1 && s[i][j] == 'o') {
      b = { i, j };
    }
  }
  cout << abs(a.first - b.first) + abs(a.second - b.second) << endl;
  return 0;
}