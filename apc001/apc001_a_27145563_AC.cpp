/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/apc001/submissions/27145563
 * Submitted at: 2021-11-09 14:15:19
 * Problem URL: https://atcoder.jp/contests/apc001/tasks/apc001_a
 * Result: AC
 * Execution Time: 11 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x,y;cin>>x>>y;
  if(x%y==0){cout<<-1<<endl;return 0;}
  else cout<<x<<endl;
}