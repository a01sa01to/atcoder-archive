/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30955145
 * Submitted at: 2022-04-14 10:32:21
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_x
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  double ans = 0;

  while (n--) {
    int p, q;
    cin >> p >> q;
    ans += (double) q / p;
  }

  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}