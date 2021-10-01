/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/26255285
 * Submitted at: 2021-10-01 21:25:08
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/abc095_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int a=700;
  for(int i=0;i<3;i++) if(s[i]=='o') a+=100;
  cout<<a<<endl;
}