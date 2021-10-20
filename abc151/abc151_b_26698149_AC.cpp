/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/26698149
 * Submitted at: 2021-10-20 14:56:11
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,k,m,a=0;
  cin>>n>>k>>m;
  for(int i=1;i<n;i++){int x;cin>>x;a+=x;}
  cout<<(n*m-a>k?-1:max(0,n*m-a))<<endl;
}