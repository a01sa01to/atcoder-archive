/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc035/submissions/27594935
 * Submitted at: 2021-11-30 01:00:25
 * Problem URL: https://atcoder.jp/contests/agc035/tasks/agc035_a
 * Result: WA
 * Execution Time: 60 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<int,int>mp;
  for(int i=0;i<n;++i){int a;cin>>a;++mp[a];}
  bool chk=false;
  if(mp.size()==1 && mp[0]==n)chk=true;
  else if(mp.size()==2){
    int x=-1,y=-1;
    for(auto v:mp){
      if(v.first==0)x=v.second;
      else y=v.second;
    }
    if(x*2==y)chk=true;
  }
  else if(mp.size()==3){
    pair<int,int>x={-1,-1},y={-1,-1},z={-1,-1};
    int tmp=0;
    for(auto v:mp){
      if(tmp==0)x=v;
      else if(tmp==1)y=v;
      else z=v;
      tmp++;
    }
    if(x.second==y.second&&y.second==z.second && x.first^y.first^z.first==0)chk=true;
  }
  puts(chk?"Yes":"No");
}