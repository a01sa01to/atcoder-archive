/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/zone2021/submissions/27747188
 * Submitted at: 2021-12-07 13:45:37
 * Problem URL: https://atcoder.jp/contests/zone2021/tasks/zone2021_d
 * Result: AC
 * Execution Time: 28 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  deque<char> d;
  bool isRev=false;
  for(int i=0;i<s.size();++i){
    if(s[i]=='R'){isRev^=1;continue;}
    if(isRev)d.push_front(s[i]);
    else d.push_back(s[i]);
  }
  s="";
  while(!d.empty()){
    if(isRev){s.push_back(d.back());d.pop_back();}
    else{s.push_back(d.front());d.pop_front();}
  }
  string t="";
  for(int i=0;i<s.size();++i){
    t.push_back(s[i]);
    if(t.size()==1)continue;
    if(t[t.size()-1] == t[t.size()-2]){t.pop_back();t.pop_back();}
  }
  cout<<t<<endl;
}