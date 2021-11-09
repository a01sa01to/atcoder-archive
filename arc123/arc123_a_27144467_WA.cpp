/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc123/submissions/27144467
 * Submitted at: 2021-11-09 12:16:27
 * Problem URL: https://atcoder.jp/contests/arc123/tasks/arc123_a
 * Result: WA
 * Execution Time: 9 ms
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
  else if(x&1)ans=(-x-1)/2+1;
  else ans=(-x)/2;
  cout<<ans<<endl;
}