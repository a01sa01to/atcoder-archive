/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-qualb/submissions/27044126
 * Submitted at: 2021-11-06 01:26:21
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t="CODEFESTIVAL2016";
  cin>>s;int ans=0;
  for(int i=0;i<16;i++)ans+=t[i]!=s[i];
  cout<<ans<<endl;
}