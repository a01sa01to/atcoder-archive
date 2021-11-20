/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc073/submissions/27349032
 * Submitted at: 2021-11-20 18:06:12
 * Problem URL: https://atcoder.jp/contests/arc073/tasks/arc073_a
 * Result: AC
 * Execution Time: 63 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,t;cin>>n>>t;
  ll ans=0,prev=0;
  for(int i=0;i<n;i++){
    ll a;cin>>a;
    if(prev+t<a){prev=a;ans+=t;}
    else{
      ans+=a-prev;
      prev=a;
    }
  }
  cout<<ans+t<<endl;
}