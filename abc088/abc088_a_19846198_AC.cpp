/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/19846198
 * Submitted at: 2021-01-31 22:57:45
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <iostream>
using namespace std;
int main(){
  int n,a;
  cin >> n >> a;
  int ad = n - 500*(n/500);
  cout << (ad>a?"No":"Yes") << endl;
  return 0;
}