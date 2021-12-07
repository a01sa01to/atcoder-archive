/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc149/submissions/27747845
 * Submitted at: 2021-12-07 14:36:17
 * Problem URL: https://atcoder.jp/contests/abc149/tasks/abc149_d
 * Result: AC
 * Execution Time: 15 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,r,s,p;cin>>n>>k>>r>>s>>p;
  string t;cin>>t;
  int ans=0;
  for(int i=0;i<n;++i){
    if(i<k || t[i] != t[i-k]){
      if(t[i] == 'r')ans+=p;
      if(t[i] == 's')ans+=r;
      if(t[i] == 'p')ans+=s;
    }
    else if(t[i] == t[i-k])t[i]='.';
  }
  cout<<ans<<endl;
}