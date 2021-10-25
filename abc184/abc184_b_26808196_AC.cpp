/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc184/submissions/26808196
 * Submitted at: 2021-10-25 11:18:31
 * Problem URL: https://atcoder.jp/contests/abc184/tasks/abc184_b
 * Result: AC
 * Execution Time: 14 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;cin>>n>>x;string s;cin>>s;
  for(int i=0;i<n;i++) x+=(s[i]=='o'?1:-1),x=max(x,0);
  cout<<x<<endl;
}