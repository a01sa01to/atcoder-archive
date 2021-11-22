/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc113/submissions/27441739
 * Submitted at: 2021-11-22 14:49:36
 * Problem URL: https://atcoder.jp/contests/arc113/tasks/arc113_b
 * Result: WA
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll a,b,c;cin>>a>>b>>c;a%=10;
  ll p=b%4;
  if(p==2 && c>1)p=0;
  else if(p==3 && c&1==0)p=1;
  if(p==0)p=4;
  ll ans=a;
  while(--p)(ans*=a)%=10;
  cout<<ans<<endl;
}