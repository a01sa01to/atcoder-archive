/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc130/submissions/27505892
 * Submitted at: 2021-11-27 12:55:37
 * Problem URL: https://atcoder.jp/contests/abc130/tasks/abc130_c
 * Result: WA
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int w,h,x,y;cin>>w>>h>>x>>y;
  bool chk=x*2==w;
  chk&=y*2==h;
  cout<<w*h/2.0<<" "<<chk<<endl;
}