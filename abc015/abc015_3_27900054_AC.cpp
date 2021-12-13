/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc015/submissions/27900054
 * Submitted at: 2021-12-13 23:08:46
 * Problem URL: https://atcoder.jp/contests/abc015/tasks/abc015_3
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
bool chk = false;
int n,k;
void dfs(vector<vector<int>>&t, int xo,int nidx){
  if(nidx==n){if(xo==0)chk=true;return;}
  for(int i=0;i<k;++i)dfs(t,xo^t[nidx][i],nidx+1);
}
int main(){
  cin>>n>>k;
  vector t(n,vector<int>(k));
  for(int i=0;i<n;++i)for(int j=0;j<k;++j)cin>>t[i][j];
  for(int i=0;i<k;++i)dfs(t,t[0][i],1);
  puts(chk?"Found":"Nothing");
}