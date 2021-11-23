/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/27454649
 * Submitted at: 2021-11-23 11:42:41
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_c
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
vector<int>pls(vector<int>a,vector<int>b){
  for(int i=0;i<a.size();i++)a[i]+=b[i];
  return a;
}
int main(){
  int n,m,x;cin>>n>>m>>x;
  vector<vector<int>>v(n,vector<int>(m+1));
  for(int i=0;i<n;i++)for(int j=0;j<=m;j++)cin>>v[i][j];
  const int inf=1e9;
  int ans=inf;
  for(int i=0;i<1<<n;i++){
    vector<int> tmp(m+1,0);
    for(int j=0;j<n;j++){
      if(i&1<<j)tmp=pls(tmp,v[j]);
    }
    bool chk=true;
    for(int i=1;i<=m;i++)if(tmp[i]<x)chk=false;
    if(chk)ans=min(ans,tmp[0]);
  }
  cout<<(ans==inf?-1:ans)<<endl;
}