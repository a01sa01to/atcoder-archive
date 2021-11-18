/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/27316273
 * Submitted at: 2021-11-18 18:35:17
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d,e,f,g,h,i;cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
  bool chk=true;
  // a1=0とする: a=b1, b=b2, c=b3
  // a2
  chk&=(d-a == e-b && e-b == f-c);
  // a3
  chk&=(g-a == h-b && h-b == i-c);
  puts(chk?"Yes":"No");
}