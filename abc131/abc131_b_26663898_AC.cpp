/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/26663898
 * Submitted at: 2021-10-18 11:42:31
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,l,r,e=0;
  cin>>n>>l;r=l+n-1;
  if(r<0)e=r;
  else if(l>0)e=l;
  cout<<n*(l+r)/2-e<<endl;
}