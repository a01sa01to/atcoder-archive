/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc044/submissions/26252622
 * Submitted at: 2021-10-01 18:11:18
 * Problem URL: https://atcoder.jp/contests/abc044/tasks/abc044_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<min(a,b)*c+max(0,a-b)*d<<endl;
}