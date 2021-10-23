/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc174/submissions/26741473
 * Submitted at: 2021-10-23 11:34:14
 * Problem URL: https://atcoder.jp/contests/abc174/tasks/abc174_b
 * Result: AC
 * Execution Time: 98 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long n,d,x,y,ans=0;
  cin>>n>>d;
  while(n--){cin>>x>>y;if(x*x+y*y<=d*d)ans++;}
  cout<<ans<<endl;
}