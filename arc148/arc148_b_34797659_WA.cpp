/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc148/submissions/34797659
 * Submitted at: 2022-09-11 22:33:04
 * Problem URL: https://atcoder.jp/contests/arc148/tasks/arc148_b
 * Result: WA
 * Execution Time: 215 ms
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector dist(n + 1, vector<int>(n + 1, 0));
  Debug("check1");
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      Debug(i, j, s[j]);
      if (s[j] == 'd') dist[i][j + 1] = dist[i][j] + 1;
      if (s[j] == 'p') dist[i][j + 1] = dist[i][j] - 1;
    }
  }
  Debug("check2");
  tuple<int, int, int> ans = { dist[0][n], 0, 0 };
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j <= n; j++) {
      int d = dist[0][i] - dist[i][j] + dist[j][n];
      if (d > get<0>(ans)) ans = { d, i, j };
    }
  }
  Debug("check3");
  Debug(ans);
  if (get<2>(ans) > get<1>(ans)) {
    reverse(s.begin() + get<1>(ans), s.begin() + get<2>(ans));
    for (int i = get<1>(ans); i < get<2>(ans); i++) {
      s[i] = (s[i] == 'd' ? 'p' : 'd');
    }
  }
  cout << s << endl;
  return 0;
}