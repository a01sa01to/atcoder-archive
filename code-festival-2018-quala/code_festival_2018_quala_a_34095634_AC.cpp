/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2018-quala/submissions/34095634
 * Submitted at: 2022-08-17 00:57:17
 * Problem URL: https://atcoder.jp/contests/code-festival-2018-quala/tasks/code_festival_2018_quala_a
 * Result: AC
 * Execution Time: 17 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,s;cin>>a>>b>>c>>s;
  int d=s-a-b-c;
  puts(d>=0&&d<=3?"Yes":"No");
}