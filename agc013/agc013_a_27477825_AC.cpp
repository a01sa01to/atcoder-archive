/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc013/submissions/27477825
 * Submitted at: 2021-11-25 00:39:04
 * Problem URL: https://atcoder.jp/contests/agc013/tasks/agc013_a
 * Result: AC
 * Execution Time: 41 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  int ans=0;
  for(int i=0;i<n;i++){
    while(v[i]==v[i+1] && i+1<n)++i;
    if(v[i]<v[i+1])while(v[i]<=v[i+1] && i+1<n)++i;
    else if(v[i]>v[i+1])while(v[i]>=v[i+1] && i+1<n)++i;
    ++ans;
  }
  cout<<ans<<endl;
}