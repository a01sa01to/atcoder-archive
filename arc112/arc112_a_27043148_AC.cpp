/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc112/submissions/27043148
 * Submitted at: 2021-11-06 00:03:23
 * Problem URL: https://atcoder.jp/contests/arc112/tasks/arc112_a
 * Result: AC
 * Execution Time: 56 ms
 */

#include<iostream>
using namespace std;
typedef long long ll;
ll sum(ll a,ll b){return (a+b)*(b-a+1)/2; }
int main(){
  ll n;cin>>n;
  while(n--){
    ll l,r;cin>>l>>r;
    if(r<2*l) cout<<0<<endl;
    else cout<<sum(1,r-2*l+1)<<endl;
  }
}