/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/27205586
 * Submitted at: 2021-11-13 16:58:45
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_c
 * Result: AC
 * Execution Time: 27 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;int ans=0;
  for(int a=1;a<=n;a++)for(int b=1;a*b<=n;b++){
    if(n-a*b>0)ans++;
  }
  cout<<ans<<endl;
}