/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202010-open/submissions/30249707
 * Submitted at: 2022-03-20 00:41:02
 * Problem URL: https://atcoder.jp/contests/past202010-open/tasks/past202010_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;cin>>a>>b>>c;
  int M=max({a,b,c}),m=min({a,b,c}),s=a+b+c;
  if(s-M-m==a)puts("A");
  else if(s-M-m==b)puts("B");
  else if(s-M-m==c)puts("C");
  return 0;
}