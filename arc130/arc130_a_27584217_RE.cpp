/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc130/submissions/27584217
 * Submitted at: 2021-11-29 11:40:52
 * Problem URL: https://atcoder.jp/contests/arc130/tasks/arc130_a
 * Result: RE
 * Execution Time: 2276 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n;string s;cin>>n>>s;
  map<string,ll> mp;
  for(int i=0;i<n;i++)++mp[s.substr(0,i)+s.substr(i+1)];
  ll ans=0;
  for(auto x:mp){ll t=x.second;ans+=t*(t-1)/2;}
  cout<<ans<<endl;
}