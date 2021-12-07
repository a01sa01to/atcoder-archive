/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/27748341
 * Submitted at: 2021-12-07 15:19:32
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_d
 * Result: AC
 * Execution Time: 27 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
vector<P> divisor(ll x){
  vector<P> ret;
  for(ll i=1;i*i<=x;++i){
    if(x%i != 0)continue;
    ret.push_back({i,x/i});
    ret.push_back({x/i,i});
  }
  return ret;
}
int main(){
  ll n;cin>>n;
  vector<P> div=divisor(2*n);
  ll ans=0;
  set<P>st;
  for(ll i=0;i<div.size();++i){
    // first=r-l+1, second=l+r
    // first+second = 2*r + 1
    // first+second-1 = 2*r
    // second-first = 2*l-1
    // second-first+1 = 2*l
    ll l,r;
    bool chk1=false,chk2=false;
    auto [x,y]=div[i];
    if((x+y-1)%2==0)r=(x+y-1)/2,chk1=true;
    if((y-x+1)%2==0)l=(y-x+1)/2,chk2=true;
    if(chk1 && chk2){
      if(!st.count({l,r}))++ans,st.insert({l,r});
    }
  }
  cout<<ans<<endl;
}