/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc166/submissions/27200781
 * Submitted at: 2021-11-13 12:07:04
 * Problem URL: https://atcoder.jp/contests/abc166/tasks/abc166_c
 * Result: AC
 * Execution Time: 95 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  vector<int> h(n);
  vector<vector<int>> G(n);
  for(int i=0;i<n;i++)cin>>h[i];
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    a--,b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  int ans=0;
  for(int i=0;i<n;i++){
    int t=h[i];
    bool chk=true;
    for(int v:G[i]){
      if(h[v]>=t)chk=false;
    }
    ans+=chk;
  }
  cout<<ans<<endl;
}