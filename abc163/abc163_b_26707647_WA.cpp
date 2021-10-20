/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc163/submissions/26707647
 * Submitted at: 2021-10-21 00:09:49
 * Problem URL: https://atcoder.jp/contests/abc163/tasks/abc163_b
 * Result: WA
 * Execution Time: 9 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,m,s=0,a;cin>>n>>m;
  while(m--){cin>>a;s+=a;}
  cout<<n-s<<endl;
}