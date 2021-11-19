/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/indeednow-qualb/submissions/27325209
 * Submitted at: 2021-11-19 12:08:28
 * Problem URL: https://atcoder.jp/contests/indeednow-qualb/tasks/indeednow_2015_qualb_2
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string _s,_t;cin>>_s>>_t;
  if(_s.size()!=_t.size()){cout<<-1<<endl;return 0;}
  reverse(_s.begin(),_s.end());
  reverse(_t.begin(),_t.end());
  queue<char> s,t;
  for(int i=0;i<_s.size();i++){s.push(_s[i]);t.push(_t[i]);}
  for(int i=0;i<s.size();i++){
    if(s==t){cout<<i<<endl;return 0;}
    s.push(s.front());s.pop();
  }
  cout<<-1<<endl;
}