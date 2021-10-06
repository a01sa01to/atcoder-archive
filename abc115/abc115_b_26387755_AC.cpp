/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc115/submissions/26387755
 * Submitted at: 2021-10-06 22:49:56
 * Problem URL: https://atcoder.jp/contests/abc115/tasks/abc115_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,s=0,m=0,t;cin>>n;
  while(n--){cin>>t;m=max(m,t);s+=t;}
  cout<<s-m/2<<endl;
}