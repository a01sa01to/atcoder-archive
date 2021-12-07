/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc173/submissions/27748080
 * Submitted at: 2021-12-07 14:57:59
 * Problem URL: https://atcoder.jp/contests/abc173/tasks/abc173_d
 * Result: AC
 * Execution Time: 79 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;++i)cin>>v[i];
  sort(v.rbegin(),v.rend());
  long ans=0;
  for(int i=1;i<n;++i)ans+=long(v[i/2]);
  cout<<ans<<endl;
}