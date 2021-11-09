/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc041/submissions/27143935
 * Submitted at: 2021-11-09 11:25:14
 * Problem URL: https://atcoder.jp/contests/arc041/tasks/arc041_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y,z;cin>>x>>y>>z;
  if(y>=z)cout<<x+z<<endl;
  else cout<<y+x-(z-y)<<endl;
}