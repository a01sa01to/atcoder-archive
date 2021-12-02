/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-final/submissions/27624638
 * Submitted at: 2021-12-02 13:59:32
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll _pow(ll a, ll x){
  ll ret=1;
  for(int i=0;i<x;++i)ret*=a;
  return ret;
}
ll f(ll k){
  ll ret=0;
  string s=to_string(k);
  reverse(s.begin(),s.end());
  for(int i=0;i<s.size();++i){
    ret+=(s[i]-'0')*_pow(k,i);
  }
  return ret;
}
int main(){
  ll x;cin>>x;
  for(int i=10;i<=10000;++i){
    if(f(i) == x){cout<<i<<endl;return 0;}
  }
  cout<<-1<<endl;
}