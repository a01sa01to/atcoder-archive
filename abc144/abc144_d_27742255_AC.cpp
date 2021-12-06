/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc144/submissions/27742255
 * Submitted at: 2021-12-07 00:03:21
 * Problem URL: https://atcoder.jp/contests/abc144/tasks/abc144_d
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main(){
  ld a,b,x;cin>>a>>b>>x;
  ld ans=0;
  if(a*a*b <= 2*x){
    // x = a^2/2 (2b - atan)
    // 2x/a^2 = 2b - atan
    // atan = 2b - 2x/a^2
    // tan = 2b/a - 2x/a^3
    ans = atan(2*b/a - 2*x/(a*a*a));
  }
  else{
    // x = b/tan * ab/2
    // xtan = ab^2/2
    // tan = ab^2/2x
    ans = atan(a*b*b/(2*x));
  }
  const ld Pi = 3.14159265358979;
  cout<<fixed<<setprecision(15)<<ans*180/Pi<<endl;
}