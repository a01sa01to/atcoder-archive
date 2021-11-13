/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc012/submissions/27207119
 * Submitted at: 2021-11-13 18:17:59
 * Problem URL: https://atcoder.jp/contests/abc012/tasks/abc012_3
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int x;cin>>x;
  x=2025-x;
  for(int i=1;i<10;i++)if(x%i==0&&x/i<10)printf("%d x %d\n",i,x/i);
}