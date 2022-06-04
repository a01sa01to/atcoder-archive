/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/32212186
 * Submitted at: 2022-06-04 21:11:35
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_b
 * Result: AC
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int memo[31][31];
int Combi(int n, int r) {
  if (r == 1) return memo[n][r] = 1;
  if (n == r) return memo[n][r] = 1;
  if (memo[n][r] != 0) return memo[n][r];
  return memo[n][r] = Combi(n - 1, r) + Combi(n - 1, r - 1);
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << Combi(i + 1, j + 1) << " ";
    }
    cout << endl;
  }
  return 0;
}