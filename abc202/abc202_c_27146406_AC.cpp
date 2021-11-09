/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc202/submissions/27146406
 * Submitted at: 2021-11-09 15:31:37
 * Problem URL: https://atcoder.jp/contests/abc202/tasks/abc202_c
 * Result: AC
 * Execution Time: 71 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  long long ans=0;
  vector<int> a(n),b(n),c(n),cnt(n);
  for(int i=0;i<n;i++){cin>>a[i];a[i]--;}
  for(int i=0;i<n;i++){cin>>b[i];b[i]--;}
  for(int i=0;i<n;i++){cin>>c[i];c[i]--;}
  for(int i=0;i<n;i++)cnt[a[i]]++;
  for(int i=0;i<n;i++)ans+=cnt[b[c[i]]];
  cout<<ans<<endl;
}