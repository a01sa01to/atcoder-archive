/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc153/submissions/26980027
 * Submitted at: 2021-11-02 00:42:27
 * Problem URL: https://atcoder.jp/contests/abc153/tasks/abc153_c
 * Result: RE
 * Execution Time: 147 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,k;cin>>n>>k;
  vector<ll> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  sort(v.begin(),v.end(),greater<ll>());
  for(int i=0;i<k;i++) v[i]=0;
  cout<<accumulate(v.begin(),v.end(),0LL)<<endl;
}