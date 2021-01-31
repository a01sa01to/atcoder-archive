/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/19846339
 * Submitted at: 2021-01-31 23:02:41
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <iostream>
using namespace std;
int main(){
  int n,a;
  cin >> n >> a;
  cout << ((n%500)>a?"No":"Yes") << endl;
  return 0;
}