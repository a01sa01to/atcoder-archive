/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc112/submissions/26387684
 * Submitted at: 2021-10-06 22:46:36
 * Problem URL: https://atcoder.jp/contests/abc112/tasks/abc112_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,t,c,_t,a=10001;cin>>n>>t;
  while(n--){cin>>c>>_t;if(_t<=t)a=min(a,c);}
  if(a==10001)puts("TLE");else cout<<a<<endl;
}