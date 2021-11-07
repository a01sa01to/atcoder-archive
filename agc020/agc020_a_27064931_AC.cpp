/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc020/submissions/27064931
 * Submitted at: 2021-11-07 10:52:42
 * Problem URL: https://atcoder.jp/contests/agc020/tasks/agc020_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,a,b;cin>>n>>a>>b;
  if((b-a)%2)puts("Borys");
  else puts("Alice");
}