/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc035/submissions/27594835
 * Submitted at: 2021-11-30 00:51:02
 * Problem URL: https://atcoder.jp/contests/agc035/tasks/agc035_a
 * Result: WA
 * Execution Time: 54 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<int,int>mp;
  for(int i=0;i<n;++i){int a;cin>>a;++mp[a];}
  bool chk=false;
  if(mp.size()==1 && mp[0]==n)chk=true;
  else if(mp.size()==2 && mp[0]==n/3 && n%3==0)chk=true;
  else if(mp.size()==3){
    vector<int>t;
    for(auto x:mp)if(x.second==n/3)t.push_back(x.first);
    if(t.size()==3 && t[0]^t[1]^t[2]==0 && n%3==0) chk=true;
  }
  puts(chk?"Yes":"No");
}