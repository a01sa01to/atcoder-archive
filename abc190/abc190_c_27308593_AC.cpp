/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/27308593
 * Submitted at: 2021-11-18 00:23:10
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_c
 * Result: AC
 * Execution Time: 36 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,m) for(int i=0;i<m;i++)
int main(){
  int n,m,k;cin>>n>>m;
  vector<bool> dish(n);
  vector<pair<int,int>>cond(m);
  rep(i,m)cin>>cond[i].first>>cond[i].second;
  cin>>k;
  int ans=0;
  vector<pair<int,int>> choice(k);
  rep(i,k)cin>>choice[i].first>>choice[i].second;
  rep(i,1<<k){
    dish.assign(n,false);
    rep(j,k){
      if(i&1<<j)dish[choice[j].first-1]=true;
      else dish[choice[j].second-1]=true;
    }
    int cnt=0;
    rep(j,m){
      if(dish[cond[j].first-1]&&dish[cond[j].second-1])cnt++;
    }
    ans=max(ans,cnt);
  }
  cout<<ans<<endl;
}