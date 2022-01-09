/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc006/submissions/28426006
 * Submitted at: 2022-01-09 10:54:45
 * Problem URL: https://atcoder.jp/contests/abc006/tasks/abc006_3
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  int a = 0, b = 0, c = 0;
  if (m > 4 * n) a = b = c = -1;
  else {
    if (m % 2 == 1) b = 1, m -= 3, --n;
    rep(i, n + 1) {
      int _a = i, _c = n - i;
      if (2 * _a + 4 * _c == m) {
        a = _a;
        c = _c;
        break;
      }
    }
  }
  printf("%d %d %d\n", a, b, c);
  return 0;
}