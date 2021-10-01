/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc135/submissions/26257784
 * Submitted at: 2021-10-01 23:47:05
 * Problem URL: https://atcoder.jp/contests/abc135/tasks/abc135_a
 * Result: AC
 * Execution Time: 4 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;cin>>a>>b;
  if((a+b)%2) cout<<"IMPOSSIBLE"<<endl;
  else cout<<(a+b)/2<<endl;
}