/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34207263
 * Submitted at: 2022-08-21 21:09:04
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_c
 * Result: AC
 * Execution Time: 21 ms
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
  vector Grid(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  vector visited(h, vector(w, false));
  int i = 0, j = 0;
  visited[0][0] = true;
  while (true) {
    if (Grid[i][j] == 'U') {
      if (i == 0) {
        printf("%d %d\n", i + 1, j + 1);
        return 0;
      }
      if (visited[i - 1][j]) {
        printf("-1\n");
        return 0;
      }
      visited[i - 1][j] = true;
      i--;
    }
    if (Grid[i][j] == 'D') {
      if (i == h - 1) {
        printf("%d %d\n", i + 1, j + 1);
        return 0;
      }
      if (visited[i + 1][j]) {
        printf("-1\n");
        return 0;
      }
      visited[i + 1][j] = true;
      i++;
    }
    if (Grid[i][j] == 'L') {
      if (j == 0) {
        printf("%d %d\n", i + 1, j + 1);
        return 0;
      }
      if (visited[i][j - 1]) {
        printf("-1\n");
        return 0;
      }
      visited[i][j - 1] = true;
      j--;
    }
    if (Grid[i][j] == 'R') {
      if (j == w - 1) {
        printf("%d %d\n", i + 1, j + 1);
        return 0;
      }
      if (visited[i][j + 1]) {
        printf("-1\n");
        return 0;
      }
      visited[i][j + 1] = true;
      j++;
    }
  }
  return 0;
}