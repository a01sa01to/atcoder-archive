/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/21992245
 * Submitted at: 2021-04-24 21:01:07
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  cout << ((a*a+b*b<c*c)?"Yes":"No") << endl;
  return 0;
}