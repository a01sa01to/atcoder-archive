/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc117/submissions/27484613
 * Submitted at: 2021-11-25 17:10:26
 * Problem URL: https://atcoder.jp/contests/abc117/tasks/abc117_c
 * Result: AC
 * Execution Time: 43 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  if(n>=m)cout<<0<<endl;
  else{
    vector<int>v(m);
    for(int i=0;i<m;i++)cin>>v[i];
    sort(v.begin(),v.end());
    vector<int>leng;
    for(int i=0;i<m-1;i++)leng.push_back(v[i+1]-v[i]);
    sort(leng.begin(),leng.end());
    int ans=0;
    for(int i=0;i<m-n;i++)ans+=leng[i];
    cout<<ans<<endl;
  }
  
}