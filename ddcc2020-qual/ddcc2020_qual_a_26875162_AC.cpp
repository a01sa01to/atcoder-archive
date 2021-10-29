/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ddcc2020-qual/submissions/26875162
 * Submitted at: 2021-10-29 23:57:58
 * Problem URL: https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c=0;cin>>a>>b;
  if(a==1)c+=300000;else if(a==2)c+=200000;else if(a==3)c+=100000;
  if(b==1)c+=300000;else if(b==2)c+=200000;else if(b==3)c+=100000;
  if(a==b&&a==1) c+=400000;
  cout<<c<<endl;
}