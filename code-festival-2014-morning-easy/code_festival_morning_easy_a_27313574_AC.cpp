/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-morning-easy/submissions/27313574
 * Submitted at: 2021-11-18 14:55:30
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-morning-easy/tasks/code_festival_morning_easy_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
  int n;cin>>n;
  ll ans=0,prev;cin>>prev;
  for(int i=1;i<n;i++){
    ll a;cin>>a;
    ans+=a-prev;prev=a;
  }
  cout<<fixed<<setprecision(15)<<ans/ld(n-1)<<endl;
}