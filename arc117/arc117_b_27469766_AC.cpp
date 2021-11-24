/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc117/submissions/27469766
 * Submitted at: 2021-11-24 13:46:02
 * Problem URL: https://atcoder.jp/contests/arc117/tasks/arc117_b
 * Result: AC
 * Execution Time: 47 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n;cin>>n;
  vector<int>v(n+1,0);
  for(int i=1;i<=n;i++)cin>>v[i];
  const ll MOD=1000000007;
  sort(v.begin(),v.end());
  ll ans=1;
  for(int i=0;i<n;i++)(ans*=v[i+1]-v[i]+1)%=MOD;
  cout<<ans<<endl;
}