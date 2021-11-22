/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc099/submissions/27449786
 * Submitted at: 2021-11-22 23:54:36
 * Problem URL: https://atcoder.jp/contests/arc099/tasks/arc099_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;cin>>n>>k;
  n-=k;--k;
  cout<<1+(n+k-1)/k<<endl;
}