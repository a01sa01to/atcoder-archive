/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954588
 * Submitted at: 2022-04-14 09:35:08
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_o
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y) {
  if (y == 0) return x;
  return GCD(y, x % y);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << GCD(a, b) << endl;
  return 0;
}