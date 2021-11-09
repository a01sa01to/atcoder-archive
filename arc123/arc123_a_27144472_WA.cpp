/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc123/submissions/27144472
 * Submitted at: 2021-11-09 12:17:33
 * Problem URL: https://atcoder.jp/contests/arc123/tasks/arc123_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll a,b,c;cin>>a>>b>>c;
  ll x=2*b-a-c;
  ll ans=0;
  if(x>0)ans=x;
  else if(x==0)ans=0;
  else if((-x)%2)ans=(-x-1)/2+1;
  else ans=(-x)/2;
  cout<<ans<<endl;
}