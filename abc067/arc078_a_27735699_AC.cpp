/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc067/submissions/27735699
 * Submitted at: 2021-12-06 17:19:39
 * Problem URL: https://atcoder.jp/contests/abc067/tasks/arc078_a
 * Result: AC
 * Execution Time: 56 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<long> sum(n+1,0);
  for(int i=0;i<n;++i){int x;cin>>x;sum[i+1]=sum[i]+x;}
  long ans=1e15;
  for(int i=1;i<n;++i)ans=min(ans,abs(sum[n]-2*sum[i]));
  cout<<ans<<endl;
}