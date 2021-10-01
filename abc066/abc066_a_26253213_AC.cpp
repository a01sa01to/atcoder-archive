/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc066/submissions/26253213
 * Submitted at: 2021-10-01 18:56:38
 * Problem URL: https://atcoder.jp/contests/abc066/tasks/abc066_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<min({a+b,b+c,c+a})<<endl;
}