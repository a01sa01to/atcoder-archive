/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34936482
 * Submitted at: 2022-09-17 21:32:34
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_e
 * Result: WA
 * Execution Time: 15 ms
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
  int l = 1, r = n + 1;
  int cnt = n - 1;
  while (r - l > 1) {
    int mid = (l + r) / 2;
    printf("? %d %d %d %d\n", l, 1, mid, n);
    int t;
    cin >> t;
    if (t == -1) exit(1);
    if (t < cnt - t)
      r = mid + 1;
    else
      l = mid;
    cnt = t;
  }
  int x = l;

  l = 1, r = n + 1;
  cnt = n - 1;
  while (r - l > 1) {
    int mid = (l + r) / 2;
    printf("? %d %d %d %d\n", 1, l, n, mid);
    int t;
    cin >> t;
    if (t == -1) exit(1);
    if (t < cnt - t)
      r = mid + 1;
    else
      l = mid;
  }
  int y = l;

  printf("! %d %d\n", x, y);
  return 0;
}