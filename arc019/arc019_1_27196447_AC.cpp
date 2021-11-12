/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc019/submissions/27196447
 * Submitted at: 2021-11-13 00:41:11
 * Problem URL: https://atcoder.jp/contests/arc019/tasks/arc019_1
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  for(int i=0;i<s.size();i++){
    switch(s[i]){
      case 'O':s[i]='0';break;
      case 'D':s[i]='0';break;
      case 'I':s[i]='1';break;
      case 'Z':s[i]='2';break;
      case 'S':s[i]='5';break;
      case 'B':s[i]='8';break;
    }
  }
  cout<<s<<endl;
}