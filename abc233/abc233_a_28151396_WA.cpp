/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/28151396
 * Submitted at: 2021-12-25 23:21:49
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_a
 * Result: WA
 * Execution Time: 7 ms
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
  int x, y;
  cin >> x >> y;
  cout << max((y - x - 1) / 10 + 1, 0) << endl;
  return 0;
}