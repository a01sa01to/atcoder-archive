/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/20558214
 * Submitted at: 2021-02-28 00:08:26
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc086_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  cout << (a*b % 2 == 0 ? "Even" : "Odd") << endl;
  return 0;
}