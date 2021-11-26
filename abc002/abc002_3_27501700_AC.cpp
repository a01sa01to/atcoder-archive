/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc002/submissions/27501700
 * Submitted at: 2021-11-27 01:01:33
 * Problem URL: https://atcoder.jp/contests/abc002/tasks/abc002_3
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
double sqr(double x){return x*x;}
int main(){
  double ax,ay,bx,by,cx,cy;
  cin>>ax>>ay>>bx>>by>>cx>>cy;
  double a=sqrt(sqr(ax-bx)+sqr(ay-by)), b=sqrt(sqr(bx-cx)+sqr(by-cy)), c=sqrt(sqr(cx-ax)+sqr(cy-ay));
  double s=(a+b+c)/2;
  cout<<fixed<<setprecision(5)<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
}