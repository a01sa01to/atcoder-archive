/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/apc001/submissions/27145526
 * Submitted at: 2021-11-09 14:11:57
 * Problem URL: https://atcoder.jp/contests/apc001/tasks/apc001_a
 * Result: WA
 * Execution Time: 2205 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x,y;cin>>x>>y;
  if(y%x==0){cout<<-1<<endl;return 0;}
  for(long long i=2*x;i<=(long long)1e18;i+=x){
    if(i%y){cout<<i<<endl;return 0;}
  }
}