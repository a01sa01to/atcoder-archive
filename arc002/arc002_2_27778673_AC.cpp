/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc002/submissions/27778673
 * Submitted at: 2021-12-09 17:29:27
 * Problem URL: https://atcoder.jp/contests/arc002/tasks/arc002_2
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
  int y, m, d;
  scanf("%d/%d/%d", &y, &m, &d);
  vector<int> days = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ++days[1];
  while (y % m != 0 || (y / m) % d != 0) {
    ++d;
    if (days[m - 1] < d) d = 1, ++m;
    if (m > 12) m = 1, ++y;
  }
  printf("%04d/%02d/%02d\n", y, m, d);
  return 0;
}