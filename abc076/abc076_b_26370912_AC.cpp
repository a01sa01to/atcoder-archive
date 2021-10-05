/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc076/submissions/26370912
 * Submitted at: 2021-10-05 22:21:01
 * Problem URL: https://atcoder.jp/contests/abc076/tasks/abc076_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,k,a=1;
  cin>>n>>k;
  while(n--) a=min(2*a,a+k);
  cout<<a<<endl;
}