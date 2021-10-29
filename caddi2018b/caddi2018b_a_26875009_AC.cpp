/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/caddi2018b/submissions/26875009
 * Submitted at: 2021-10-29 23:47:40
 * Problem URL: https://atcoder.jp/contests/caddi2018b/tasks/caddi2018b_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a=0;
  for(int i=0;i<4;i++){char c;cin>>c;a+=c=='2';}
  cout<<a<<endl;
}