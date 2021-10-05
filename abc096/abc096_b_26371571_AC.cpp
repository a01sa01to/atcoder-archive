/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc096/submissions/26371571
 * Submitted at: 2021-10-05 22:50:04
 * Problem URL: https://atcoder.jp/contests/abc096/tasks/abc096_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int p(int x,int a){while(a--)x*=2;return x;}
int main(){
  int a,b,c,k;
  cin>>a>>b>>c>>k;
  cout<<p(max({a,b,c}),k)+a+b+c-max({a,b,c})<<endl;
}