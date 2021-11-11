/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc168/submissions/27183184
 * Submitted at: 2021-11-12 00:58:36
 * Problem URL: https://atcoder.jp/contests/abc168/tasks/abc168_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main(){
  cout<<fixed<<setprecision(15);
  int a,b,h,m;cin>>a>>b>>h>>m;
  const ld Pi = 3.1415926535897932;
  ld shortClock = h*30+m/2.0;
  ld longClock = m*6;
  ld tmp=abs(shortClock-longClock);
  ld theta = min(360-tmp,tmp);
  ld thetaRad = theta/180*Pi;
  cout<<sqrt(pow(ld(a),2)+pow(ld(b),2)-2*a*b*cos(thetaRad))<<endl;
}