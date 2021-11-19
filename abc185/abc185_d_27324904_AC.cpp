/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/27324904
 * Submitted at: 2021-11-19 11:31:10
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_d
 * Result: AC
 * Execution Time: 81 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  if(m==0){cout<<1<<endl;return 0;}
  vector<int>v(m);
  for(int i=0;i<m;i++)cin>>v[i];
  sort(v.begin(),v.end());
  vector<pair<int,int>> a;
  pair<int,int>tmp={v[0],v[0]};
  for(int i=1;i<m;i++){
    if(tmp.second+1==v[i])tmp.second=v[i];
    else{ a.push_back(tmp); tmp={v[i],v[i]}; }
  }
  a.push_back(tmp);
  vector<int> len;
  if(a[0].first!=1)len.push_back(a[0].first-1);
  for(int i=1;i<a.size();i++)len.push_back(a[i].first-a[i-1].second-1);
  if(a.back().second!=n)len.push_back(n-a.back().second);
  if(len.size()==0){cout<<0<<endl;return 0;}
  int gc=len[0];
  for(int i=1;i<len.size();i++)gc=min(gc,len[i]);
  int ans=0;
  for(int i=0;i<len.size();i++)ans+=(len[i]+gc-1)/gc;
  cout<<ans<<endl;
}