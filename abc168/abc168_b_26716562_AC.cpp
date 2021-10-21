/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc168/submissions/26716562
 * Submitted at: 2021-10-21 18:44:02
 * Problem URL: https://atcoder.jp/contests/abc168/tasks/abc168_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int k;
  cin>>k;
  string s;
  cin>>s;
  cout<<s.substr(0,k)<<(s.size()>k?"...":"")<<endl;
}