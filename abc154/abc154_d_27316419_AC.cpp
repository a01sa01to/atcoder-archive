/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc154/submissions/27316419
 * Submitted at: 2021-11-18 18:48:42
 * Problem URL: https://atcoder.jp/contests/abc154/tasks/abc154_d
 * Result: AC
 * Execution Time: 50 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main(){
  int n,k;cin>>n>>k;
  vector<ld> v(n);
  for(int i=0;i<n;i++){
    int x;cin>>x;
    v[i]=(x+1)/2.0;
  }
  vector<ld> sum(n+1,0);
  for(int i=0;i<n;i++)sum[i+1]=sum[i]+v[i];
  ld ans=0;
  for(int i=0;i<n-k+1;i++)ans=max(ans,sum[i+k]-sum[i]);
  cout<<fixed<<setprecision(15)<<ans<<endl;
}