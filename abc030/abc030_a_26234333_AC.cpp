/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc030/submissions/26234333
 * Submitted at: 2021-09-30 12:24:59
 * Problem URL: https://atcoder.jp/contests/abc030/tasks/abc030_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  if(b/a>d/c) cout<<"TAKAHASHI"<<endl;
  else if(b/a<d/c) cout<<"AOKI"<<endl;
  else cout<<"DRAW"<<endl;
  return 0;
}