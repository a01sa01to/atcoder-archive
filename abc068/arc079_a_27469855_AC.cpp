/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc068/submissions/27469855
 * Submitted at: 2021-11-24 13:56:08
 * Problem URL: https://atcoder.jp/contests/abc068/tasks/arc079_a
 * Result: AC
 * Execution Time: 118 ms
 */

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>Graph;
vector<bool>seen;
void solve(int v,int cnt=0){
  if(cnt>2)return;
  seen[v]=true;
  cnt++;
  for(int next_v:Graph[v])solve(next_v,cnt);
}
int main(){
  int n,m;cin>>n>>m;
  Graph.resize(n);seen.resize(n);
  for(int i=0;i<m;i++){int a,b;cin>>a>>b;--a,--b;Graph[a].push_back(b);}
  solve(0);
  puts(seen[n-1]?"POSSIBLE":"IMPOSSIBLE");
}