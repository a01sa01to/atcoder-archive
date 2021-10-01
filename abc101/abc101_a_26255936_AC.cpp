/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc101/submissions/26255936
 * Submitted at: 2021-10-01 21:55:27
 * Problem URL: https://atcoder.jp/contests/abc101/tasks/abc101_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;int a=0;
  for(int i=0;i<4;i++) (s[i]=='+'?a++:a--);
  cout<<a<<endl;
}