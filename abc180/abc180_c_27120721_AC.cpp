/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc180/submissions/27120721
 * Submitted at: 2021-11-08 00:52:06
 * Problem URL: https://atcoder.jp/contests/abc180/tasks/abc180_c
 * Result: AC
 * Execution Time: 39 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll x;cin>>x;
  vector<ll> ans;
  for(ll i=1;i*i<=x;i++){
    if(x%i==0) ans.push_back(i);
    if(x%i==0 && i*i!=x) ans.push_back(x/i);
  }
  sort(ans.begin(),ans.end());
  for(ll a:ans)cout<<a<<endl;
}