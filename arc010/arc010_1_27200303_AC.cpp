/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc010/submissions/27200303
 * Submitted at: 2021-11-13 11:36:05
 * Problem URL: https://atcoder.jp/contests/arc010/tasks/arc010_1
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,a,b;cin>>n>>m>>a>>b;
  for(int d=1;d<=m;d++){
    int c;cin>>c;
    if(n<=a)n+=b;
    if(n<c){cout<<d<<endl;return 0;}
    n-=c;
  }
  cout<<"complete"<<endl;
}