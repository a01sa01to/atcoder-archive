/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc141/submissions/26689910
 * Submitted at: 2021-10-19 22:53:47
 * Problem URL: https://atcoder.jp/contests/abc141/tasks/abc141_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  bool c=true;
  for(int i=0;i<s.size();i++){
    if(i%2&&s[i]=='R')c=false;
    if(~i%2&&s[i]=='L')c=false;
  }
  puts(c?"Yes":"No");
}