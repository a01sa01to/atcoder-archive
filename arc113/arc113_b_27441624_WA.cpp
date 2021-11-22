/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc113/submissions/27441624
 * Submitted at: 2021-11-22 14:40:45
 * Problem URL: https://atcoder.jp/contests/arc113/tasks/arc113_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;cin>>a>>b>>c;
  int p=b%4;
  if(p==2 && c>1)p=0;
  else if(p==3 && c&1==0)p=1;
  if(p==0)p=4;
  int ans=1;
  while(p){
    (ans*=a)%=10;
    --p;
  }
  cout<<ans<<endl;
}