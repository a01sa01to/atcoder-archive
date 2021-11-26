/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc015/submissions/27499142
 * Submitted at: 2021-11-26 21:56:00
 * Problem URL: https://atcoder.jp/contests/agc015/tasks/agc015_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long n,a,b;cin>>n>>a>>b;
  if(a>b)cout<<0<<endl;
  else if(n==1)cout<<(a==b?1:0)<<endl;
  else cout<<(n-2)*(b-a)+1<<endl;
}