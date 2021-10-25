/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc183/submissions/26808168
 * Submitted at: 2021-10-25 11:16:06
 * Problem URL: https://atcoder.jp/contests/abc183/tasks/abc183_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main(){
  ld a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<fixed<<setprecision(15)<<a-b*(c-a)/(-b-d)<<endl;
}