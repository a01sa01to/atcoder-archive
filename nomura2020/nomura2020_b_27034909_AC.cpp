/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nomura2020/submissions/27034909
 * Submitted at: 2021-11-05 15:16:21
 * Problem URL: https://atcoder.jp/contests/nomura2020/tasks/nomura2020_b
 * Result: AC
 * Execution Time: 14 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++) if(s[i]=='?')s[i]='D';
  cout<<s<<endl;
}