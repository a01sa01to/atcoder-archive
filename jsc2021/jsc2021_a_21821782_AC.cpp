/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jsc2021/submissions/21821782
 * Submitted at: 2021-04-17 17:10:22
 * Problem URL: https://atcoder.jp/contests/jsc2021/tasks/jsc2021_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  double x,y,z;
  cin >> x >> y >> z;
  cout << ceil(y/x*z)-1 << endl;
  return 0;
}