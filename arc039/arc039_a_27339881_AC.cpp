/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc039/submissions/27339881
 * Submitted at: 2021-11-20 13:03:39
 * Problem URL: https://atcoder.jp/contests/arc039/tasks/arc039_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t;cin>>s>>t;
  const string _s=s,_t=t;
  int ans=-1000;
  ans=max(ans, stoi(s)-stoi(t));
  s[0]='9';ans=max(ans, stoi(s)-stoi(t));s=_s;
  s[1]='9';ans=max(ans, stoi(s)-stoi(t));s=_s;
  s[2]='9';ans=max(ans, stoi(s)-stoi(t));s=_s;
  t[0]='1';ans=max(ans, stoi(s)-stoi(t));t=_t;
  t[1]='0';ans=max(ans, stoi(s)-stoi(t));t=_t;
  t[2]='0';ans=max(ans, stoi(s)-stoi(t));t=_t;
  cout<<ans<<endl;
}