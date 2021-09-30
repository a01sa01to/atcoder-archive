/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc027/submissions/26234298
 * Submitted at: 2021-09-30 12:21:08
 * Problem URL: https://atcoder.jp/contests/abc027/tasks/abc027_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y,z;
  cin>>x>>y>>z;
  if(x==y) cout<<z<<endl;
  else if(x==z) cout<<y<<endl;
  else if(y==z) cout<<x<<endl;
  return 0;
}