/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc113/submissions/27441854
 * Submitted at: 2021-11-22 14:57:43
 * Problem URL: https://atcoder.jp/contests/arc113/tasks/arc113_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int poww(int a,int b){
  int ret=a;
  while(--b){
    ret=ret*a%10;
  }
  return ret;
}
int main(){
  int a,b,c;cin>>a>>b>>c;
  int p;
  switch(b%4){
    case 0:p=0;break;
    case 1:p=1;break;
    case 2:p=(c>1?0:2);break;
    case 3:p=(c%2?3:1);break;
  }
  if(p==0)p=4;
  int ans;
  switch(a%10){
    case 0:case 1:case 5:case 6:ans=a%10;break;
    default:ans=poww(a%10,p);break;
  }
  cout<<ans<<endl;
}