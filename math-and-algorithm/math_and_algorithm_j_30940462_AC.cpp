/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940462
 * Submitted at: 2022-04-13 12:32:58
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_j
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(int n) {
  if (n == 0) return 1;
  return n * fact(n - 1);
}

int main() {
  int n;
  cin >> n;
  cout << fact(n) << endl;
  return 0;
}