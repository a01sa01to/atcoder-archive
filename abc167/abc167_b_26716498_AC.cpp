/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/26716498
 * Submitted at: 2021-10-21 18:37:06
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_b
 * Result: AC
 * Execution Time: 4 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a+b<d) cout<<a-(d-a-b)<<endl;
  else cout<<min(a,d)<<endl;
}