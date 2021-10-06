/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc110/submissions/26387560
 * Submitted at: 2021-10-06 22:40:43
 * Problem URL: https://atcoder.jp/contests/abc110/tasks/abc110_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,x,y;
  cin>>n>>m>>x>>y;
  if(x>=y){puts("War");return 0;}
  int maxX=-101,minY=101;
  while(n--){int a;cin>>a;maxX=max(maxX,a);}
  while(m--){int a;cin>>a;minY=min(minY,a);}
  if(maxX>=minY || maxX>=y || minY<=x) puts("War");
  else puts("No War");
}