/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc109/submissions/27439506
 * Submitted at: 2021-11-22 10:48:14
 * Problem URL: https://atcoder.jp/contests/abc109/tasks/abc109_c
 * Result: AC
 * Execution Time: 40 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x,a;cin>>n>>x>>a;
  int ans=abs(a-x);
  while(--n){cin>>a;ans=gcd(ans,abs(a-x));}
  cout<<ans<<endl;
}