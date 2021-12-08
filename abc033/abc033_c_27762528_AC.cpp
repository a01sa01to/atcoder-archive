/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc033/submissions/27762528
 * Submitted at: 2021-12-08 14:55:52
 * Problem URL: https://atcoder.jp/contests/abc033/tasks/abc033_c
 * Result: AC
 * Execution Time: 12 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  vector<bool>a;
  bool chk=true;
  for(int i=0;i<s.size();++i){
    if(s[i]=='+'){a.push_back(chk);chk=true;}
    else if(s[i]=='0')chk=false;
  }
  a.push_back(chk);
  int ans=0;
  cout<<accumulate(a.begin(),a.end(),0)<<endl;
}