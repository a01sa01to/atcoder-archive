/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202112-open/submissions/30389327
 * Submitted at: 2022-03-25 00:00:30
 * Problem URL: https://atcoder.jp/contests/past202112-open/tasks/past202112_b
 * Result: AC
 * Execution Time: 44 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    int a, b;
    cin >> a >> b;
    int d = b - a;
    d %= 100;
    ans += d / 50;
    d %= 10;
    ans += d / 5;
  }
  cout << ans << endl;
  return 0;
}