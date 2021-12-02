/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc065/submissions/27624539
 * Submitted at: 2021-12-02 13:50:40
 * Problem URL: https://atcoder.jp/contests/abc065/tasks/arc076_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
ll modfact(ll x){
  ll ret=1;
  for(ll i=1;i<=x;++i)(ret*=i)%=MOD;
  return ret;
}
int main(){
  ll n,m;cin>>n>>m;
  if(abs(n-m)>1)puts("0");
  else cout<<modfact(n)*modfact(m)*(m==n?2:1)%MOD<<endl;
}