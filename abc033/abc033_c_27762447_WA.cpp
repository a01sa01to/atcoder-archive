/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc033/submissions/27762447
 * Submitted at: 2021-12-08 14:49:08
 * Problem URL: https://atcoder.jp/contests/abc033/tasks/abc033_c
 * Result: WA
 * Execution Time: 11 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  vector<int>a;
  int tmp=1,now=0;
  for(int i=0;i<s.size();++i){
    if(s[i]=='+'){tmp*=now;a.push_back(tmp);tmp=1,now=0;}
    else if(s[i]=='*'){tmp*=now;now=0;}
    else{now*=10;now+=s[i]-'0';}
    //cout<<"[DEB1] "<<s[i]<<" "<<tmp<<" "<<now<<endl;
  }
  tmp*=now;a.push_back(tmp);tmp=1,now=0;
  int ans=0;
  for(int i=0;i<a.size();++i)if(a[i])++ans;//cout<<"[DEB] "<<a[i]<<" ";}cout<<endl;
  cout<<ans<<endl;
}