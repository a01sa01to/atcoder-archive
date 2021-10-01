/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/26257955
 * Submitted at: 2021-10-01 23:56:23
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t;cin>>s>>t;int c=0;
  for(int i=0;i<3;i++)if(s[i]==t[i])c++;
  cout<<c<<endl;
}