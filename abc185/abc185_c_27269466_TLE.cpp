/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/27269466
 * Submitted at: 2021-11-15 11:48:37
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll combi(ll n,ll r){
  r=min(r,n-r);
  if(r==0)return 1;
  if(r==1)return n;
  return combi(n-1,r-1)+combi(n-1,r);
}
int main(){
  ll l;cin>>l;
  cout<<combi(l-1,11LL)<<endl;
}