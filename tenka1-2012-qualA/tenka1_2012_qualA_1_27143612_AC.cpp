/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2012-qualA/submissions/27143612
 * Submitted at: 2021-11-09 10:47:58
 * Problem URL: https://atcoder.jp/contests/tenka1-2012-qualA/tasks/tenka1_2012_qualA_1
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll x,pending0=0,pending1=0,pending2=1,ans=1;cin>>x;
  for(ll i=0;i<x;i++){
    pending0+=pending1;
    pending1=pending2;
    pending2=pending0;
    ans=pending0+pending1+pending2;
  }
  cout<<ans<<endl;
}