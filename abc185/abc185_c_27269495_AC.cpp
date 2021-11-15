/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/27269495
 * Submitted at: 2021-11-15 11:51:56
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_c
 * Result: AC
 * Execution Time: 11 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>> Combination(400,vector<ll>(20,0));
ll combi(ll n,ll r){
  r=min(r,n-r);
  if(Combination[n][r])return Combination[n][r];
  if(r==0)return 1;
  if(r==1)return n;
  return Combination[n][r]=combi(n-1,r-1)+combi(n-1,r);
}
int main(){
  ll l;cin>>l;
  cout<<combi(l-1,11LL)<<endl;
}