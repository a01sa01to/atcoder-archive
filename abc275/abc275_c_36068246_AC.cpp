/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36068246
 * Submitted at: 2022-10-29 22:24:57
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_c
 * Result: AC
 * Execution Time: 67 ms
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

inline int sqr(int x) { return x * x; }
inline int dist(int x1, int y1, int x2, int y2) {
  return sqr(x1 - x2) + sqr(y1 - y2);
}
inline int dot(int x1, int y1, int x2, int y2) {
  return x1 * x2 + y1 * y2;
}
inline bool check(int x1, int y1, int x2, int y2, int x3, int y3) {
  return (dot(x2 - x1, y2 - y1, x3 - x1, y3 - y1) == 0) && (dist(x1, y1, x2, y2) == dist(x1, y1, x3, y3));
}

int main() {
  constexpr int n = 9;
  vector Grid(n, vector<char>(n));
  rep(i, n) rep(j, n) cin >> Grid[i][j];
  set<set<pair<int, int>>> used;
  for (int x1 = 0; x1 < n; x1++) {
    for (int y1 = 0; y1 < n; y1++) {
      for (int x2 = 0; x2 < n; x2++) {
        for (int y2 = 0; y2 < n; y2++) {
          for (int x3 = 0; x3 < n; x3++) {
            for (int y3 = 0; y3 < n; y3++) {
              for (int x4 = 0; x4 < n; x4++) {
                for (int y4 = 0; y4 < n; y4++) {
                  if (!check(x1, y1, x2, y2, x4, y4)) continue;
                  if (!check(x2, y2, x1, y1, x3, y3)) continue;
                  if (!check(x3, y3, x2, y2, x4, y4)) continue;
                  if (!check(x4, y4, x1, y1, x3, y3)) continue;
                  set<pair<int, int>> s;
                  s.insert({ x1, y1 });
                  s.insert({ x2, y2 });
                  s.insert({ x3, y3 });
                  s.insert({ x4, y4 });
                  if (s.size() != 4) continue;
                  if (used.count(s)) continue;
                  if (Grid[x1][y1] == '#' && Grid[x2][y2] == '#' && Grid[x3][y3] == '#' && Grid[x4][y4] == '#') {
                    used.insert(s);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << used.size() << endl;
  return 0;
}