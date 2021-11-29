/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc035/submissions/27594974
 * Submitted at: 2021-11-30 01:05:26
 * Problem URL: https://atcoder.jp/contests/agc035/tasks/agc035_a
 * Result: AC
 * Execution Time: 53 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<int,int>mp;
  for(int i=0;i<n;++i){int a;cin>>a;++mp[a];}
  bool chk=false;
  if(mp.size()==1) chk=(mp[0]==n);
  else if(mp.size()==2){
    int x=0,y=0;
    for(auto v:mp){
      if(v.first==0) x=v.second;
      else y=v.second;
    }
    chk=(x*2==y);
  }
  else if(mp.size()==3){
    int i=0,aw[3],pw[3];
    for(auto [a,p]:mp){
      aw[i]=a;
      pw[i]=p;
      i++;
    }
    chk=(pw[0]==pw[1]&&pw[0]==pw[2]&&(aw[0]^aw[1])==aw[2]);
  }
  puts(chk?"Yes":"No");
}