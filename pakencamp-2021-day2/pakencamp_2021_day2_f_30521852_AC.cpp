/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day2/submissions/30521852
 * Submitted at: 2022-03-28 10:57:15
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day2/tasks/pakencamp_2021_day2_f
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 2) {
    printf("1 2 1 1 2 1");
  }
  else if (n == 3) {
    printf("1 3 1 2 2 3");
  }
  else {
    printf("%d %d %d %d %d %d\n", 1, n, 1, n - 1, 1, n - 2);
  }
  return 0;
}