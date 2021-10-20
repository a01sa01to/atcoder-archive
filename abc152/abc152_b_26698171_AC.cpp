/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc152/submissions/26698171
 * Submitted at: 2021-10-20 14:58:18
 * Problem URL: https://atcoder.jp/contests/abc152/tasks/abc152_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;cin>>a>>b;
  string s="",t="";
  for(int i=0;i<a;i++) t.push_back('0'+b);
  for(int i=0;i<b;i++) s.push_back('0'+a);
  cout<<min(s,t)<<endl;
}