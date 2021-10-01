/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc097/submissions/26255425
 * Submitted at: 2021-10-01 21:31:55
 * Problem URL: https://atcoder.jp/contests/abc097/tasks/abc097_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(abs(a-c)<=d || (abs(a-b)<=d&&abs(b-c)<=d)) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}