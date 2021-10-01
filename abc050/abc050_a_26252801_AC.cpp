/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc050/submissions/26252801
 * Submitted at: 2021-10-01 18:24:27
 * Problem URL: https://atcoder.jp/contests/abc050/tasks/abc050_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;char c;
  cin>>a>>c>>b;
  cout<<(c=='+'?a+b:a-b)<<endl;
}