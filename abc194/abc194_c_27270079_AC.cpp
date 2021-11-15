/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/27270079
 * Submitted at: 2021-11-15 13:04:17
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_c
 * Result: AC
 * Execution Time: 63 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;cin>>n;
  ll sum=0,d2=0;
  for(ll i=0;i<n;i++){int a;cin>>a;sum+=a;d2+=a*a;}
  cout<<n*d2-sum*sum<<endl;
}