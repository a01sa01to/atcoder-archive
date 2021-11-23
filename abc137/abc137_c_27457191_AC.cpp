/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc137/submissions/27457191
 * Submitted at: 2021-11-23 15:13:09
 * Problem URL: https://atcoder.jp/contests/abc137/tasks/abc137_c
 * Result: AC
 * Execution Time: 133 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n;cin>>n;
  map<vector<int>,ll>mp;
  for(int i=0;i<n;i++){
    string s;cin>>s;
    vector<int>t(26,0);
    for(int j=0;j<10;j++)++t[s[j]-'a'];
    ++mp[t];
  }
  ll ans=0;
  for(auto [key,val] : mp)ans+=(val*(val-1))/2;
  cout<<ans<<endl;
}