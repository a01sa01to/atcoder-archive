/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc038/submissions/27111320
 * Submitted at: 2021-11-07 22:30:42
 * Problem URL: https://atcoder.jp/contests/arc038/tasks/arc038_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a.begin(),a.end(),greater<int>());
  int ans=0;
  for(int i=0;i<n;i++)if(~i%2)ans+=a[i];
  cout<<ans<<endl;
}