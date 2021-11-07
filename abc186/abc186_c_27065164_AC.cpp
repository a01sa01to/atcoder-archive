/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/27065164
 * Submitted at: 2021-11-07 11:13:15
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_c
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
bool chk10(int n){
  while(n>0){
    if(n%10==7)return true;
    n/=10;
  }
  return false;
}
bool chk8(int n){
  while(n>0){
    if(n%8==7)return true;
    n/=8;
  }
  return false;
}
int main(){
  int n;cin>>n;
  int ans=0;
  for(int i=1;i<=n;i++)ans+=!(chk10(i)||chk8(i));
  cout<<ans<<endl;
}