/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc193/submissions/27269658
 * Submitted at: 2021-11-15 12:10:18
 * Problem URL: https://atcoder.jp/contests/abc193/tasks/abc193_c
 * Result: AC
 * Execution Time: 27 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll x;cin>>x;
  set<ll> st;
  for(ll a=2;a*a<=x;a++){
    ll i=a*a;
    while(i<=x){
      st.insert(i);
      i*=a;
    }
  }
  cout<<x-st.size()<<endl;
}