/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-quala/submissions/27807532
 * Submitted at: 2021-12-11 15:34:10
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-quala/tasks/code_festival_2017_quala_b
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  for (int i = 0; i <= n; ++i)
    for (int j = 0; j <= m; ++j) {
      // 横i*n個・縦にj*m個・重複はi*j個
      if (i * n + j * m - 2 * i * j == k) {
        puts("Yes");
        return 0;
      }
    }
  puts("No");
  return 0;
}