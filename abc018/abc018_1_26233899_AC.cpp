/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc018/submissions/26233899
 * Submitted at: 2021-09-30 11:44:24
 * Problem URL: https://atcoder.jp/contests/abc018/tasks/abc018_1
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y,z;
  cin>>x>>y>>z;
  if(x<y&&y<z) cout<<3<<endl<<2<<endl<<1<<endl;
  if(x<z&&z<y) cout<<3<<endl<<1<<endl<<2<<endl;
  if(z<x&&x<y) cout<<2<<endl<<1<<endl<<3<<endl;
  if(y<x&&x<z) cout<<2<<endl<<3<<endl<<1<<endl;
  if(z<y&&y<x) cout<<1<<endl<<2<<endl<<3<<endl;
  if(y<z&&z<x) cout<<1<<endl<<3<<endl<<2<<endl;
  return 0;
}