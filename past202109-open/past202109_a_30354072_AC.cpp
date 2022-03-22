/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202109-open/submissions/30354072
 * Submitted at: 2022-03-23 00:00:03
 * Problem URL: https://atcoder.jp/contests/past202109-open/tasks/past202109_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << min(a + b - c, d) << endl;
  return 0;
}