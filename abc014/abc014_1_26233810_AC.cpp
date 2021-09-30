/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc014/submissions/26233810
 * Submitted at: 2021-09-30 11:36:03
 * Problem URL: https://atcoder.jp/contests/abc014/tasks/abc014_1
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b;
  cin >> a >> b;
  cout << (b-(a%b))%b << endl;
  return 0;
}