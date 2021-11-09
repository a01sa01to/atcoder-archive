/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc035/submissions/27145028
 * Submitted at: 2021-11-09 13:18:16
 * Problem URL: https://atcoder.jp/contests/arc035/tasks/arc035_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n=s.size();
  bool chk=true;
  for(int i=0;i<n/2;i++){
    if(s[i]=='*'||s[n-i-1]=='*') continue;
    if(s[i]!=s[n-i-1])chk=false;
  }
  puts(chk?"YES":"NO");
}