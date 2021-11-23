/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc082/submissions/27454530
 * Submitted at: 2021-11-23 11:34:23
 * Problem URL: https://atcoder.jp/contests/abc082/tasks/arc087_a
 * Result: AC
 * Execution Time: 123 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<int,int>cnt;
  vector<int>v(n);
  for(int i=0;i<n;++i){cin>>v[i];++cnt[v[i]];}
  int ans=0;
  for(int i=0;i<n;++i){
    if(cnt[v[i]]==0)continue;
    if(cnt[v[i]]==v[i])continue;
    if(v[i]>cnt[v[i]]){ans+=cnt[v[i]];cnt[v[i]]=0;}
    if(v[i]<cnt[v[i]]){ans+=cnt[v[i]]-v[i];cnt[v[i]]=v[i];}
  }
  cout<<ans<<endl;
}