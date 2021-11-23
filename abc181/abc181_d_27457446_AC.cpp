/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc181/submissions/27457446
 * Submitted at: 2021-11-23 15:29:18
 * Problem URL: https://atcoder.jp/contests/abc181/tasks/abc181_d
 * Result: AC
 * Execution Time: 16 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  vector<int>cnt(10,0);
  for(int i=0;i<s.size();i++)cnt[s[i]-'0']++;
  if(s.size()==1)puts(s=="8"?"Yes":"No");
  else if(s.size()==2){
    bool chk=false;
    chk|=stoi(s)%8==0;chk|=stoi(string{s[1],s[0]})%8==0;
    puts(chk?"Yes":"No");
  }
  else{
    for(int i=112;i<1000;i+=8){
      string t=to_string(i);
      vector<int>tmp(10,0);
      for(int j=0;j<3;j++)tmp[t[j]-'0']++;
      bool chk=true;
      for(int j=0;j<10;j++)if(tmp[j]>cnt[j])chk=false;
      if(chk){puts("Yes");return 0;}
    }
    puts("No");
  }
}