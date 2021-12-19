/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/27984152
 * Submitted at: 2021-12-19 21:00:56
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_a
 * Result: AC
 * Execution Time: 9 ms
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
  int a, b;
  scanf("%dx%d", &a, &b);
  printf("%d\n", a * b);
  return 0;
}