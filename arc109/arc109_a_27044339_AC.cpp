/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc109/submissions/27044339
 * Submitted at: 2021-11-06 01:47:39
 * Problem URL: https://atcoder.jp/contests/arc109/tasks/arc109_a
 * Result: AC
 * Execution Time: 19 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,x,y;
  cin>>a>>b>>x>>y;
  cout<<(abs(2*b+1-2*a)/2)*min(y,2*x) + (abs(2*b+1-2*a)%2)*x<<endl;
}