/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc159/submissions/27348397
 * Submitted at: 2021-11-20 17:30:09
 * Problem URL: https://atcoder.jp/contests/abc159/tasks/abc159_d
 * Result: AC
 * Execution Time: 460 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
  ll n;cin>>n;
  vector<ll> a(n);rep(i,n)cin>>a[i];
  vector<ll> b=a;
  map<ll,ll> mp;
  sort(b.begin(),b.end());
  ll prev=0;rep(i,n-1){if(b[i]==b[i+1])b[i]=prev;else{mp[b[i]]=prev;b[i]=prev++;}}mp[b.back()]=prev;b.back()=prev;
  rep(i,n)a[i]=mp[a[i]];
  vector<ll>cnt(++prev,0);
  rep(i,n)++cnt[a[i]];
  ll sum=0;
  rep(i,prev)sum+=cnt[i]*(cnt[i]-1)/2;
  rep(i,n){
    ll tmp=cnt[a[i]];
    cout<<max(0LL,sum-tmp*(tmp-1)/2+(tmp-1)*(tmp-2)/2)<<endl;
  }
}