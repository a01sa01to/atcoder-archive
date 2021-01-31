/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc086/submissions/19846390
 * Submitted at: 2021-01-31 23:04:43
 * Problem URL: https://atcoder.jp/contests/abc086/tasks/abc086_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  cout << ((a*b)%2 ? "Odd" : "Even") << endl;
  return 0;
}