/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc158/submissions/27469908
 * Submitted at: 2021-11-24 14:03:03
 * Problem URL: https://atcoder.jp/contests/abc158/tasks/abc158_d
 * Result: AC
 * Execution Time: 69 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  deque<char>dq;for(int i=0;i<s.size();i++)dq.push_back(s[i]);
  int q;cin>>q;
  bool rev=false;
  for(int i=0;i<q;i++){
    int t;cin>>t;
    if(t==1)rev^=1;
    else{
      int f;char c;cin>>f>>c;
      if((f==1&&!rev)||(f==2&&rev))dq.push_front(c);
      else if((f==2&&!rev)||(f==1&&rev)) dq.push_back(c);
    }
  }
  if(rev)while(!dq.empty()){cout<<dq.back();dq.pop_back();}
  else while(!dq.empty()){cout<<dq.front();dq.pop_front();}
  cout<<endl;
}