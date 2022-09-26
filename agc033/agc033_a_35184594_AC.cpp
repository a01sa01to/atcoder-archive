/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc033/submissions/35184594
 * Submitted at: 2022-09-27 00:20:59
 * Problem URL: https://atcoder.jp/contests/agc033/tasks/agc033_a
 * Result: AC
 * Execution Time: 46 ms
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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  queue<pair<int, int>> q;
  rep(i, h) rep(j, w) if (s[i][j] == '#') q.push({ i, j });
  int ans = -1;
  while (!q.empty()) {
    queue<pair<int, int>> next_q;
    while (!q.empty()) {
      auto [i, j] = q.front();
      q.pop();
      if (i > 0 && s[i - 1][j] == '.') {
        s[i - 1][j] = '#';
        next_q.push({ i - 1, j });
      }
      if (i < h - 1 && s[i + 1][j] == '.') {
        s[i + 1][j] = '#';
        next_q.push({ i + 1, j });
      }
      if (j > 0 && s[i][j - 1] == '.') {
        s[i][j - 1] = '#';
        next_q.push({ i, j - 1 });
      }
      if (j < w - 1 && s[i][j + 1] == '.') {
        s[i][j + 1] = '#';
        next_q.push({ i, j + 1 });
      }
    }
    swap(q, next_q);
    ans++;
  }
  cout << ans << endl;
  return 0;
}