/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/27292882
 * Submitted at: 2021-11-16 22:23:02
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_d
 * Result: AC
 * Execution Time: 79 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;cin>>n;
  vector<ll> v(n);
  ll sum=0;
  for(int i=0;i<n;i++){cin>>v[i];sum+=v[i];}
  sort(v.begin(),v.end(),greater<ll>());
  ll ans=0;
  for(int i=0;i<n-1;i++){sum-=v[i];ans+=(n-i-1)*v[i]-sum;}
  cout<<ans<<endl;
}