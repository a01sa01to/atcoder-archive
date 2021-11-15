/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc177/submissions/27270174
 * Submitted at: 2021-11-15 13:15:22
 * Problem URL: https://atcoder.jp/contests/abc177/tasks/abc177_c
 * Result: WA
 * Execution Time: 67 ms
 */

#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef modint1000000007 mint;
int main(){
  ll n,sum=0;cin>>n;
  vector<ll> v(n);
  mint ans=0;
  for(ll i=0;i<n;i++)cin>>v[i];
  for(ll i=0;i<n;i++)sum+=v[i];
  for(ll i=0;i<n;i++){sum-=v[i];ans+=v[i]*sum;}
  cout<<ans.val()<<endl;
}