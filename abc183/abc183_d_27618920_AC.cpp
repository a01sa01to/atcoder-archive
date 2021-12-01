/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc183/submissions/27618920
 * Submitted at: 2021-12-01 22:56:31
 * Problem URL: https://atcoder.jp/contests/abc183/tasks/abc183_d
 * Result: AC
 * Execution Time: 137 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,w;cin>>n>>w;
  vector<ll>imos(2e5+1,0LL);
  for(ll i=0;i<n;++i){
    ll s,t,p;cin>>s>>t>>p;
    imos[s]+=p;imos[t]-=p;
  }
  for(int i=1;i<2e5+2;++i)imos[i]+=imos[i-1];
  bool chk=true;
  for(int i=0;i<2e5+2;++i)if(imos[i]>w)chk=false;
  puts(chk?"Yes":"No");
}