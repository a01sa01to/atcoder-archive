/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc162/submissions/27143895
 * Submitted at: 2021-11-09 11:20:44
 * Problem URL: https://atcoder.jp/contests/abc162/tasks/abc162_c
 * Result: AC
 * Execution Time: 329 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int x;cin>>x;
  int ans=0;
  for(int i=1;i<=x;i++)for(int j=1;j<=x;j++)for(int k=1;k<=x;k++)ans+=gcd(i,gcd(j,k));
  cout<<ans<<endl;
}