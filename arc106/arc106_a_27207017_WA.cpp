/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc106/submissions/27207017
 * Submitted at: 2021-11-13 18:11:48
 * Problem URL: https://atcoder.jp/contests/arc106/tasks/arc106_a
 * Result: WA
 * Execution Time: 6 ms
 */

//ceil log3 10^18 = 38
//ceil log5 10^18 = 26
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pow3(ll x){
  ll ret=1;
  for(ll i=0;i<x;i++)ret*=3;
  return ret;
}
ll pow5(ll x){
  ll ret=1;
  for(ll i=0;i<x;i++)ret*=5;
  return ret;
}
int main(){
  ll x;cin>>x;
  for(ll i=0;i<38;i++)for(ll j=0;j<26;j++){
    if(pow3(i)+pow5(j)==x){printf("%lld %lld\n",i,j);return 0;}
  }
  cout<<-1<<endl;
}