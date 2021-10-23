/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc175/submissions/26741564
 * Submitted at: 2021-10-23 11:40:31
 * Problem URL: https://atcoder.jp/contests/abc175/tasks/abc175_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans=0;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)for(int k=j+1;k<n;k++){
    int a=v[i],b=v[j],c=v[k];
    if(a==b||b==c||c==a) continue;
    if(a+b+c-max({a,b,c})<=max({a,b,c})) continue;
    ans++;
  }
  cout<<ans<<endl;
}