/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954927
 * Submitted at: 2022-04-14 10:08:34
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_u
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

ll combination[100][100];

ll Combi(int n, int r) {
  if (combination[n][r]) return combination[n][r];
  if (r == 0) return combination[n][r] = 1;
  if (n == r) return combination[n][r] = 1;
  return combination[n][r] = Combi(n - 1, r - 1) + Combi(n - 1, r);
}

int main() {
  int n, r;
  cin >> n >> r;
  cout << Combi(n, r) << endl;
  return 0;
}