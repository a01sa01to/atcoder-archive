/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc130/submissions/27584555
 * Submitted at: 2021-11-29 12:14:25
 * Problem URL: https://atcoder.jp/contests/arc130/tasks/arc130_b
 * Result: AC
 * Execution Time: 357 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll h,w,c,q;cin>>h>>w>>c>>q;
  vector<tuple<ll,ll,ll>>query(q);
  for(ll i=0;i<q;++i){ll x,y,z;cin>>x>>y>>z;query[i]={x,--y,--z};}
  reverse(query.begin(),query.end());
  map<ll,bool> usedRow,usedCol; vector<ll> colors(c);
  for(ll i=0;i<q;++i){
    auto [x,y,z] = query[i];
    if(x==1 && !usedCol[y]){ //よこ
      usedCol[y]=true;
      colors[z]+=w-usedRow.size();
    }
    else if(x==2 && !usedRow[y]){ //たて
      usedRow[y]=true;
      colors[z]+=h-usedCol.size();
    }
  }
  for(ll x:colors)cout<<x<<" ";
  cout<<endl;
}