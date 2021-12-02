/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc058/submissions/27623631
 * Submitted at: 2021-12-02 11:47:34
 * Problem URL: https://atcoder.jp/contests/abc058/tasks/arc071_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector cnt(n,vector<int>(26,0));
  for(int i=0;i<n;++i){
    string s;cin>>s;
    for(int j=0;j<s.size();++j){
      ++cnt[i][s[j]-'a'];
    }
  }
  vector<int>anscnt(26,1e9);
  for(int i=0;i<n;++i)for(int j=0;j<26;++j){
    anscnt[j]=min(anscnt[j], cnt[i][j]);
  }
  string ans="";
  for(int i=0;i<26;++i)for(int j=0;j<anscnt[i];++j)ans+='a'+i;
  cout<<ans<<endl;
}