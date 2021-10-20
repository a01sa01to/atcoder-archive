/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc163/submissions/26707663
 * Submitted at: 2021-10-21 00:10:51
 * Problem URL: https://atcoder.jp/contests/abc163/tasks/abc163_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,m,s=0,a;cin>>n>>m;
  while(m--){cin>>a;s+=a;}
  if(n-s>=0)cout<<n-s<<endl;
  else cout<<-1<<endl;
}