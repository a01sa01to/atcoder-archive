/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc137/submissions/27457180
 * Submitted at: 2021-11-23 15:12:20
 * Problem URL: https://atcoder.jp/contests/abc137/tasks/abc137_c
 * Result: WA
 * Execution Time: 131 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<vector<int>,int>mp;
  for(int i=0;i<n;i++){
    string s;cin>>s;
    vector<int>t(26,0);
    for(int j=0;j<10;j++)++t[s[j]-'a'];
    ++mp[t];
  }
  long long ans=0;
  for(auto [key,val] : mp)ans+=(val*(val-1))/2;
  cout<<ans<<endl;
}