/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc126/submissions/27584769
 * Submitted at: 2021-11-29 12:39:46
 * Problem URL: https://atcoder.jp/contests/abc126/tasks/abc126_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int pow2(int x){
  int ret=1;
  for(int i=0;i<x;++i,ret*=2);
  return ret;
}
int ceillog2(int k,int i){
  int cnt=0;
  while(i<k){i*=2;++cnt;}
  return cnt;
}
int main(){
  int n,k;cin>>n>>k;
  ld ans=0;
  for(int i=1;i<=n;++i){
    ld pls=1/ld(n);
    ans+=pls/ld(pow2(ceillog2(k,i)));
  }
  cout<<fixed<<setprecision(15)<<ans<<endl;
}