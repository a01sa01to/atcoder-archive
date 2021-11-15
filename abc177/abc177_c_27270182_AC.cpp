/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc177/submissions/27270182
 * Submitted at: 2021-11-15 13:16:16
 * Problem URL: https://atcoder.jp/contests/abc177/tasks/abc177_c
 * Result: AC
 * Execution Time: 73 ms
 */

#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef modint1000000007 mint;
int main(){
  ll n;cin>>n;
  vector<ll> v(n);
  mint ans=0,sum=0;
  for(ll i=0;i<n;i++)cin>>v[i];
  for(ll i=0;i<n;i++)sum+=v[i];
  for(ll i=0;i<n;i++){sum-=v[i];ans+=v[i]*sum;}
  cout<<ans.val()<<endl;
}