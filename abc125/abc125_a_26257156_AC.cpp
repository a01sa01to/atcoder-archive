/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc125/submissions/26257156
 * Submitted at: 2021-10-01 23:05:51
 * Problem URL: https://atcoder.jp/contests/abc125/tasks/abc125_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d=0;
  cin>>a>>b>>c;
  for(int i=a;i<=c;i+=a) d+=b;
  cout<<d<<endl;
}