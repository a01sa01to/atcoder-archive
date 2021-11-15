/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc105/submissions/27269326
 * Submitted at: 2021-11-15 11:36:12
 * Problem URL: https://atcoder.jp/contests/arc105/tasks/arc105_b
 * Result: AC
 * Execution Time: 44 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans;cin>>n>>ans;
  while(--n){int b;cin>>b;ans=gcd(ans,b);}
  cout<<ans<<endl;
}