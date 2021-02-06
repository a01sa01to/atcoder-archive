/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/19955570
 * Submitted at: 2021-02-06 21:03:14
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <iostream>
using namespace std;

int main(){
  int v,t,s,d;
  cin >> v >> t >> s >> d;
  cout << ((v*t > d || v*s < d)?"Yes":"No") << endl;
  return 0;
}