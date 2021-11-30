/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc118/submissions/27606138
 * Submitted at: 2021-11-30 22:42:06
 * Problem URL: https://atcoder.jp/contests/abc118/tasks/abc118_c
 * Result: AC
 * Execution Time: 40 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans;cin>>n>>ans;
  while(--n){int a;cin>>a;ans=gcd(ans,a);}
  cout<<ans<<endl;
}