/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc113/submissions/27441643
 * Submitted at: 2021-11-22 14:42:03
 * Problem URL: https://atcoder.jp/contests/arc113/tasks/arc113_b
 * Result: WA
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll a,b,c;cin>>a>>b>>c;
  ll p=b%4;
  if(p==2 && c>1)p=0;
  else if(p==3 && c&1==0)p=1;
  if(p==0)p=4;
  ll ans=1;
  while(p--)(ans*=a)%=10;
  cout<<ans<<endl;
}