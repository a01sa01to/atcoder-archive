/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34945993
 * Submitted at: 2022-09-17 22:09:08
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_e
 * Result: WA
 * Execution Time: 16 ms
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
  int l = 0, r = n;
  // tate
  while (r - l > 1) {
    int mid = (l + r) / 2;
    Debug(l, r, mid);
    printf("? %d %d %d %d\n", l + 1, mid, 1, n);
    int t;
    cin >> t;
    if (t == -1) exit(1);
    if (t == 0) {
      r = l + 1;
      break;
    }
    if (mid - l == t) {
      l = mid;
    }
    else {
      r = mid + 1;
    }
  }
  int x = l;
  // yoko
  l = 0, r = n;
  while (r - l > 1) {
    int mid = (l + r) / 2;
    Debug(l, r, mid);
    printf("? %d %d %d %d\n", 1, n, l + 1, mid);
    int t;
    cin >> t;
    if (t == -1) exit(1);
    if (t == 0) {
      r = l + 1;
      break;
    }
    if (mid - l == t) {
      l = mid;
    }
    else {
      r = mid + 1;
    }
  }
  int y = l;

  printf("! %d %d\n", x + 1, y + 1);
  return 0;
}