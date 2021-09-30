/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc011/submissions/26233786
 * Submitted at: 2021-09-30 11:33:08
 * Problem URL: https://atcoder.jp/contests/abc011/tasks/abc011_1
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  cout << (++x == 13 ? 1 : x) << endl;
  return 0;
}