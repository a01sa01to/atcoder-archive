/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/27205986
 * Submitted at: 2021-11-13 17:16:38
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_c
 * Result: AC
 * Execution Time: 31 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  int ans=100;
  for(int i=0;i<1<<s.size();i++){
    int cnt=0;
    for(int j=0;j<s.size();j++)cnt+=!!(i&1<<j);
    int chk=0;
    for(int j=0;j<s.size();j++)if(!(i&1<<j))chk+=s[j]-'0';
    if(chk%3==0)ans=min(ans,cnt);
  }
  cout<<(ans==s.size()?-1:ans)<<endl;
}