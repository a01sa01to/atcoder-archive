/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940348
 * Submitted at: 2022-04-13 12:21:43
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_e
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  cout << accumulate(a.begin(), a.end(), 0) % 100 << endl;
  return 0;
}