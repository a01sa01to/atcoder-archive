/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc108/submissions/27623752
 * Submitted at: 2021-12-02 12:02:40
 * Problem URL: https://atcoder.jp/contests/arc108/tasks/arc108_b
 * Result: AC
 * Execution Time: 18 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  string s,t="";cin>>s;
  for(int i=0;i<n;++i){
    t+=s[i];
    if(t.size()>=3){
      if(t.substr(t.size()-3) == "fox"){
        t.pop_back();t.pop_back();t.pop_back();
      }
    }
  }
  cout<<t.size()<<endl;
}