/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc120/submissions/27195347
 * Submitted at: 2021-11-12 23:21:56
 * Problem URL: https://atcoder.jp/contests/arc120/tasks/arc120_a
 * Result: AC
 * Execution Time: 360 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;cin>>n;
  ll maxim=0,sum=0,sum_v=0;
  for(ll i=0;i<n;i++){
    ll a;cin>>a;
    maxim=max(maxim,a);
    sum_v+=a;
    sum+=sum_v;
    cout<<sum+maxim*(i+1)<<endl;
  }
}