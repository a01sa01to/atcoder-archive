/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc111/submissions/26256459
 * Submitted at: 2021-10-01 22:26:09
 * Problem URL: https://atcoder.jp/contests/abc111/tasks/abc111_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i=0;i<3;i++) if(s[i]=='1')s[i]='9'; else if(s[i]=='9')s[i]='1';
  cout<<s<<endl;
}