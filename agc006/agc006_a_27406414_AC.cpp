/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc006/submissions/27406414
 * Submitted at: 2021-11-20 23:54:43
 * Problem URL: https://atcoder.jp/contests/agc006/tasks/agc006_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;string s,t;cin>>n>>s>>t;
  int ans=0;
  for(int i=1;i<=n;i++){
    if(s.substr(n-i)==t.substr(0,i))ans=i;
  }
  cout<<2*n-ans<<endl;
}