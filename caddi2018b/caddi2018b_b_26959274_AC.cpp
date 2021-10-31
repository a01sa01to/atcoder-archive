/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/caddi2018b/submissions/26959274
 * Submitted at: 2021-10-31 22:13:10
 * Problem URL: https://atcoder.jp/contests/caddi2018b/tasks/caddi2018b_b
 * Result: AC
 * Execution Time: 4 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,h,w,a,b,c=0;
  cin>>n>>h>>w;
  while(n--){cin>>a>>b;if(a>=h&&b>=w)c++;}
  cout<<c<<endl;
}