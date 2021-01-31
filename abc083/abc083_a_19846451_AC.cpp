/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc083/submissions/19846451
 * Submitted at: 2021-01-31 23:07:13
 * Problem URL: https://atcoder.jp/contests/abc083/tasks/abc083_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int l = a+b;
  int r = c+d;
  if(l>r) cout << "Left" << endl;
  else if(l==r) cout << "Balanced" << endl;
  else if(l<r) cout << "Right" << endl;
  return 0;
}