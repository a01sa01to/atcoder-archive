/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc110/submissions/27044391
 * Submitted at: 2021-11-06 01:53:57
 * Problem URL: https://atcoder.jp/contests/arc110/tasks/arc110_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int lc=1;
  for(int i=1;i<=n;i++) lc=lcm(lc,i);
  cout<<++lc<<endl;
}