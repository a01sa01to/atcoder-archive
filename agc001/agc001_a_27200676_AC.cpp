/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc001/submissions/27200676
 * Submitted at: 2021-11-13 11:59:24
 * Problem URL: https://atcoder.jp/contests/agc001/tasks/agc001_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> v(2*n);
  for(int i=0;i<2*n;i++)cin>>v[i];
  sort(v.begin(),v.end(),greater<int>());
  int ans=0;
  for(int i=0;i<n;i++){
	ans+=min(v[2*i],v[2*i+1]);
  }
  cout<<ans<<endl;
}