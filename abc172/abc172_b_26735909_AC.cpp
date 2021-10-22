/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc172/submissions/26735909
 * Submitted at: 2021-10-22 23:53:48
 * Problem URL: https://atcoder.jp/contests/abc172/tasks/abc172_b
 * Result: AC
 * Execution Time: 21 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t;
  cin>>s>>t;
  int ans=0;
  for(int i=0;i<s.size();i++) ans+=s[i]!=t[i];
  cout<<ans<<endl;
}