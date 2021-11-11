/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc012/submissions/27182004
 * Submitted at: 2021-11-11 23:26:35
 * Problem URL: https://atcoder.jp/contests/arc012/tasks/arc012_2
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main(){
  cout<<fixed<<setprecision(15);
  int n,a,b,l;cin>>n>>a>>b>>l;
  ld dist=ld(l);
  while(n--)dist=dist/ld(a)*ld(b);
  cout<<dist<<endl;
}