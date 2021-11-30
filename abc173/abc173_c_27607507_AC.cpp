/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc173/submissions/27607507
 * Submitted at: 2021-12-01 00:00:10
 * Problem URL: https://atcoder.jp/contests/abc173/tasks/abc173_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w,k;cin>>h>>w>>k;
  vector<vector<bool>>v(h,vector<bool>(w,0));
  for(int i=0;i<h;++i)for(int j=0;j<w;++j){char c;cin>>c;v[i][j]=c=='#';}
  int ans=0;
  for(int a=0;a<1<<h;++a)for(int b=0;b<1<<w;++b){
    vector<vector<bool>>t=v;
    for(int i=0;i<h;++i)for(int j=0;j<w;++j)if(a&1<<i || b&1<<j)t[i][j]=false;
    int cnt=0;
    for(int i=0;i<h;++i)for(int j=0;j<w;++j)cnt+=t[i][j];
    if(cnt==k) ++ans;
  }
  cout<<ans<<endl;
}