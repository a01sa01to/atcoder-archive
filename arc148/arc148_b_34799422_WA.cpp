/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc148/submissions/34799422
 * Submitted at: 2022-09-11 22:46:23
 * Problem URL: https://atcoder.jp/contests/arc148/tasks/arc148_b
 * Result: WA
 * Execution Time: 2273 ms
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
  Debug(dist);
  Debug("check2");
  int ans = dist[0][n];
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j <= n; j++) {
      int d = dist[0][i] - dist[i][j] + dist[j][n];
      if (d > ans) ans = d;
    }
  }
  Debug("check3");
  Debug(ans);
  vector<string> t = { s };
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j <= n; j++) {
      int d = dist[0][i] - dist[i][j] + dist[j][n];
      if (d == ans) {
        string tmp = s;
        reverse(tmp.begin() + i, tmp.begin() + j);
        for (int k = i; k < j; k++) {
          if (tmp[k] == 'd') tmp[k] = 'p';
          else
            tmp[k] = 'd';
        }
        t.push_back(tmp);
      }
    }
  }
  sort(t.begin(), t.end());
  cout << t[0] << endl;
  return 0;
}