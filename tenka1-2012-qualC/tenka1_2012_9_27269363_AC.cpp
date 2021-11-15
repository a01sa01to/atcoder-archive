/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2012-qualC/submissions/27269363
 * Submitted at: 2021-11-15 11:40:26
 * Problem URL: https://atcoder.jp/contests/tenka1-2012-qualC/tasks/tenka1_2012_9
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
  if(x<2)return false;
  for(int i=2;i*i<=x;i++)if(x%i==0)return false;
  return true;
}
int main(){
  int x;cin>>x;
  int ans=0;
  for(int i=1;i<x;i++)ans+=isPrime(i);
  cout<<ans<<endl;
}