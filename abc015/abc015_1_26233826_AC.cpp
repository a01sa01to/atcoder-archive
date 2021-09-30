/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc015/submissions/26233826
 * Submitted at: 2021-09-30 11:37:33
 * Problem URL: https://atcoder.jp/contests/abc015/tasks/abc015_1
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  string x,y;
  cin >> x >> y;
  cout << (x.size() > y.size() ? x : y) << endl;
  return 0;
}