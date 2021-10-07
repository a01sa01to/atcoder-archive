/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc124/submissions/26403649
 * Submitted at: 2021-10-07 23:25:55
 * Problem URL: https://atcoder.jp/contests/abc124/tasks/abc124_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  int m;cin>>m;
  int a=1;
  while(--n){int x;cin>>x;if(m<=x){a++;m=x;}}
  cout<<a<<endl;
}