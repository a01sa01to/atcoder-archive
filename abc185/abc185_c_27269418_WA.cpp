/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/27269418
 * Submitted at: 2021-11-15 11:44:41
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_c
 * Result: WA
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll combi(ll n,ll r){
  ll ret=1;
  for(ll i=0;i<r;i++)ret*=n-i;
  for(ll i=1;i<=r;i++)ret/=i;
  return ret;
}
int main(){
  ll l;cin>>l;
  cout<<combi(l-1,11LL)<<endl;
}