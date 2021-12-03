/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc070/submissions/27676213
 * Submitted at: 2021-12-04 00:29:46
 * Problem URL: https://atcoder.jp/contests/abc070/tasks/abc070_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  long long a,ans;cin>>ans;
  while(--n){cin>>a;ans=lcm(ans,a);}
  cout<<ans<<endl;
}