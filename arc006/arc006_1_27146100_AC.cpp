/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc006/submissions/27146100
 * Submitted at: 2021-11-09 15:02:59
 * Problem URL: https://atcoder.jp/contests/arc006/tasks/arc006_1
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  set<int> s;
  for(int i=0;i<6;i++){int a;cin>>a;s.insert(a);}
  int b;cin>>b;
  int ans=0;bool bonus=false;
  for(int i=0;i<6;i++){
    int a;cin>>a;
    if(s.count(a))ans++;
    else if(b==a){bonus=true;ans++;}
  }
  if(ans==6 && !bonus)cout<<1<<endl;
  else if(ans==6)cout<<2<<endl;
  else if(!bonus && ans>=3)cout<<8-ans<<endl;
  else if(ans>=4)cout<<8-ans+1<<endl;
  else cout<<0<<endl;
}