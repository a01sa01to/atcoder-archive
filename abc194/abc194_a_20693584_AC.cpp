/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/20693584
 * Submitted at: 2021-03-06 21:05:47
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  if((a+b)>=15 && b>=8) cout << 1 << endl;
  else if((a+b)>=10 && b>=3) cout << 2 << endl;
  else if((a+b)>=3) cout << 3 << endl;
  else cout << 4 << endl;
  return 0;
}