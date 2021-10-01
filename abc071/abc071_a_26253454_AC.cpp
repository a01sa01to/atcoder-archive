/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc071/submissions/26253454
 * Submitted at: 2021-10-01 19:18:42
 * Problem URL: https://atcoder.jp/contests/abc071/tasks/abc071_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<(abs(a-b)>abs(a-c)?"B":"A")<<endl;
}