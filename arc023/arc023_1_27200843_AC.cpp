/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc023/submissions/27200843
 * Submitted at: 2021-11-13 12:11:44
 * Problem URL: https://atcoder.jp/contests/arc023/tasks/arc023_1
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int f(int y,int m,int d){
  if(m<3){m+=12;y--;}
  return 365*y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d;
}
int main(){
  int y,m,d;cin>>y>>m>>d;
  cout<<f(2014,5,17)-f(y,m,d)<<endl;
}