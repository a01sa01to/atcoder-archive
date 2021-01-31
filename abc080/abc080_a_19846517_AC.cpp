/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc080/submissions/19846517
 * Submitted at: 2021-01-31 23:09:45
 * Problem URL: https://atcoder.jp/contests/abc080/tasks/abc080_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  cout << min(a*n,b) << endl;
  return 0;
}