/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc039/submissions/27406624
 * Submitted at: 2021-11-20 23:59:51
 * Problem URL: https://atcoder.jp/contests/agc039/tasks/agc039_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;long long k,cnt=0,ans;cin>>s>>k;
  for(int i=0;i<s.size();i++)if(s[i-1]==s[i]){cnt++;s[i]='A';}
  ans=k*cnt;
  if(s[0]==s.back())ans+=k-1;
  cout<<ans<<endl;
}