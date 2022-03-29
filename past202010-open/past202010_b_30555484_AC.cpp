/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202010-open/submissions/30555484
 * Submitted at: 2022-03-30 00:05:19
 * Problem URL: https://atcoder.jp/contests/past202010-open/tasks/past202010_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  x *= 100;
  if (y == 0)
    cout << "ERROR" << endl;
  else
    printf("%.2lf", double(x / y) / 100);
  return 0;
}