/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc030/submissions/27034544
 * Submitted at: 2021-11-05 14:45:04
 * Problem URL: https://atcoder.jp/contests/agc030/tasks/agc030_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c;cin>>a>>b>>c;
  if(a+b+1>=c)cout<<b+c<<endl;
  else cout<<2*b+a+1<<endl;
}