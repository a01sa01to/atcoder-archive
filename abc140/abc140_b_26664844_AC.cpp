/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc140/submissions/26664844
 * Submitted at: 2021-10-18 13:20:12
 * Problem URL: https://atcoder.jp/contests/abc140/tasks/abc140_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=0;
  vector<int> a(n),b(n),c(n-1);
  for(int i=0;i<n;i++)cin>>a[i],a[i]--;
  for(int i=0;i<n;i++)cin>>b[i];
  for(int i=0;i<n-1;i++)cin>>c[i];
  for(int i=0;i<n-1;i++){
    ans+=b[a[i]];
    if(a[i+1] == a[i]+1)ans+=c[a[i]];
  }
  ans+=b[a[n-1]];
  cout<<ans<<endl;
}