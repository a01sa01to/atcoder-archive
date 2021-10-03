/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc015/submissions/26327458
 * Submitted at: 2021-10-03 10:21:40
 * Problem URL: https://atcoder.jp/contests/abc015/tasks/abc015_2
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
  int x,a=0,n=0,i=0,t;cin>>x;
  for(;i<x;i++){cin>>t;if(t){a+=t;n++;}}
  cout<<(a+n-1)/n<<endl;
}