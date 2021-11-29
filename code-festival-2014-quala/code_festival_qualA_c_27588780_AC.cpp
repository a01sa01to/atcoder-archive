/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-quala/submissions/27588780
 * Submitted at: 2021-11-29 18:30:12
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-quala/tasks/code_festival_qualA_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;cin>>a>>b;--a;
  cout<<(b/4-b/100+b/400)-(a/4-a/100+a/400)<<endl;
}