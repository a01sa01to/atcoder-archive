/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/apc001/submissions/27145550
 * Submitted at: 2021-11-09 14:14:05
 * Problem URL: https://atcoder.jp/contests/apc001/tasks/apc001_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x,y;cin>>x>>y;
  if(y%x==0)cout<<-1<<endl;
  else cout<<x<<endl;
}