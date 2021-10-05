/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc073/submissions/26370702
 * Submitted at: 2021-10-05 22:11:44
 * Problem URL: https://atcoder.jp/contests/abc073/tasks/abc073_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,a=0;cin>>n;
  while(n--){int b,c;cin>>b>>c;a+=c-b+1;}
  cout<<a<<endl;
}