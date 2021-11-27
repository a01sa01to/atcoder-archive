/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc130/submissions/27505903
 * Submitted at: 2021-11-27 12:56:28
 * Problem URL: https://atcoder.jp/contests/abc130/tasks/abc130_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long w,h,x,y;cin>>w>>h>>x>>y;
  bool chk=x*2==w;
  chk&=y*2==h;
  cout<<w*h/2.0<<" "<<chk<<endl;
}