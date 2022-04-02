/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30662833
 * Submitted at: 2022-04-02 22:16:47
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_e
 * Result: WA
 * Execution Time: 6616 ms
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
  int n;
  cin >> n;
  int ax, ay;
  cin >> ax >> ay;
  int bx, by;
  cin >> bx >> by;
  --ax, --ay, --bx, --by;
  if ((ax + ay) % 2 != (bx + by) % 2) {
    cout << -1 << endl;
    return 0;
  }

  vector dist(n, vector<int>(n, 1e9));
  rep(i, n) rep(j, n) {
    char c;
    cin >> c;
    if (c == '#') dist[i][j] = -1;
  }
  queue<pair<int, int>> q;
  q.push({ ax, ay });
  dist[ax][ay] = 0;
  auto inRange = [&](int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
  };

  while (!q.empty()) {
    auto [x, y] = q.front();
    Debug(x, y);
    q.pop();
    {  // 右下
      int cnt = 1;
      while (true) {
        if (!inRange(x + cnt, y + cnt) || dist[x + cnt][y + cnt] == -1) break;
        if (inRange(x + cnt, y + cnt) && dist[x + cnt][y + cnt] > dist[x][y] + 1) {
          dist[x + cnt][y + cnt] = dist[x][y] + 1;
          q.push({ x + cnt, y + cnt });
        }
        ++cnt;
      }
    }
    {  // 右上
      int cnt = 1;
      while (true) {
        if (!inRange(x + cnt, y - cnt) || dist[x + cnt][y - cnt] == -1) break;
        if (inRange(x + cnt, y + cnt) && dist[x + cnt][y - cnt] > dist[x][y] + 1) {
          dist[x + cnt][y - cnt] = dist[x][y] + 1;
          q.push({ x + cnt, y - cnt });
        }
        ++cnt;
      }
    }
    {  // 左下
      int cnt = 1;
      while (true) {
        if (!inRange(x - cnt, y + cnt) || dist[x - cnt][y + cnt] == -1) break;
        if (inRange(x - cnt, y + cnt) && dist[x - cnt][y + cnt] > dist[x][y] + 1) {
          dist[x - cnt][y + cnt] = dist[x][y] + 1;
          q.push({ x - cnt, y + cnt });
        }
        ++cnt;
      }
    }
    {  // 左上
      int cnt = 1;
      while (true) {
        if (!inRange(x - cnt, y - cnt) || dist[x - cnt][y - cnt] == -1) break;
        if (inRange(x - cnt, y - cnt) && dist[x - cnt][y - cnt] > dist[x][y] + 1) {
          dist[x - cnt][y - cnt] = dist[x][y] + 1;
          q.push({ x - cnt, y - cnt });
        }
        ++cnt;
      }
    }
  }

  cout << dist[bx][by] << endl;
  return 0;
}