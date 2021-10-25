/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/26808102
 * Submitted at: 2021-10-25 11:09:26
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  int mx = *max_element(v.begin(),v.end());
  pair<int,int> ans={0,0};
  for(int k=2;k<=mx;k++){
    int a=0;
    for(int i=0;i<n;i++) a+=!(v[i]%k);
    if(ans.first<a) ans={a,k};
  }
  cout<<ans.second<<endl;
}