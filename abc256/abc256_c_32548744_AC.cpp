/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32548744
 * Submitted at: 2022-06-18 21:16:41
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_c
 * Result: AC
 * Execution Time: 28 ms
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
  int h1, h2, h3, w1, w2, w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
  int ans = 0;
  for (int a = 1; a <= 28; a++)
    for (int b = 1; b <= 28; b++)
      for (int c = 1; c <= 28; c++)
        for (int d = 1; d <= 28; d++)
          for (int e = 1; e <= 28; e++) {
            int f = h1 - a - b;
            int g = h2 - c - d;
            int h = w1 - a - c;
            int i = w2 - b - d;
            if (f > 0 && g > 0 && h > 0 && i > 0 && f + g + e == w3 && h + i + e == h3) {
              Debug(a, b, c, d, e, f, g, h, i);
              ans++;
            }
          }
  cout << ans << endl;
  return 0;
}