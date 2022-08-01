/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc156/submissions/33716252
 * Submitted at: 2022-08-02 00:23:15
 * Problem URL: https://atcoder.jp/contests/abc156/tasks/abc156_d
 * Result: AC
 * Execution Time: 50 ms
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
using mint = modint1000000007;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  mint ans = mint(2).pow(n) - 1;
  {
    mint a_combi = 1;
    for (int i = 1; i <= a; i++) {
      a_combi *= (n - a + i);
      a_combi /= i;
    }
    ans -= a_combi;
  }
  {
    mint b_combi = 1;
    for (int i = 1; i <= b; i++) {
      b_combi *= (n - b + i);
      b_combi /= i;
    }
    ans -= b_combi;
  }
  cout << ans.val() << endl;
  return 0;
}