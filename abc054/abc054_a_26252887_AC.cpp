/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc054/submissions/26252887
 * Submitted at: 2021-10-01 18:30:50
 * Problem URL: https://atcoder.jp/contests/abc054/tasks/abc054_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(a==1) a+=13;
  if(b==1) b+=13;
  if(a==b) cout<<"Draw"<<endl;
  else if(a<b) cout<<"Bob"<<endl;
  else cout<<"Alice"<<endl;
}