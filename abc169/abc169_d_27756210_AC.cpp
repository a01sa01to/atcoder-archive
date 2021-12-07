/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc169/submissions/27756210
 * Submitted at: 2021-12-08 00:10:33
 * Problem URL: https://atcoder.jp/contests/abc169/tasks/abc169_d
 * Result: AC
 * Execution Time: 18 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sumInv(ll x){
  ll ok=0,ng=1e9;
  while(ng-ok>1){
    ll mid = (ok+ng)/2;
    if(mid*(mid+1)/2 <=x)ok=mid;
    else ng=mid;
  }
  return ok;
}
int main(){
  ll n;cin>>n;
  ll ans=0;
  for(ll i=2;i*i<=n;++i){
    if(n%i!=0)continue;
    ll ex=0;
    while(n%i==0){
      ++ex;
      n/=i;
    }
    //cout<<"[DEB] "<<i<<" "<<ex<<" "<<sumInv(ex)<<endl;
    ans+=sumInv(ex);
  }
  if(n!=1)++ans;
  cout<<ans<<endl;
}