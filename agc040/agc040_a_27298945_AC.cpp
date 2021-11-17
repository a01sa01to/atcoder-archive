/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc040/submissions/27298945
 * Submitted at: 2021-11-17 12:52:28
 * Problem URL: https://atcoder.jp/contests/agc040/tasks/agc040_a
 * Result: AC
 * Execution Time: 27 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  int n=s.size()+1;
  vector<int> crescendo(n,0), decrescendo(n,0);
  for(int i=0;i<n-1;i++)if(s[i]=='<')crescendo[i+1]=crescendo[i]+1;
  for(int i=n-1;i>=0;i--)if(s[i]=='>')decrescendo[i]=decrescendo[i+1]+1;
  long long ans=0;
  for(int i=0;i<n;i++)ans+=max(crescendo[i],decrescendo[i]);
  cout<<ans<<endl;
}