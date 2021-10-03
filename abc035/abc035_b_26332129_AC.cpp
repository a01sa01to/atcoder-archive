/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc035/submissions/26332129
 * Submitted at: 2021-10-03 14:59:22
 * Problem URL: https://atcoder.jp/contests/abc035/tasks/abc035_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;int t,u=0,x=0,y=0;
  cin>>s>>t;
  for(int i=0;i<s.size();i++)
    switch(s[i]){
      case 'L':x--;break;
      case 'R':x++;break;
      case 'U':y--;break;
      case 'D':y++;break;
      case '?':u++;break;
    }
  int v=abs(x)+abs(y);
  if(t==2)while(u--)(v>0?v--:v++);else v += u;
  cout<<v<<endl;
}